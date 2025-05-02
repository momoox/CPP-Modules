/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:51:59 by edelarbr          #+#    #+#             */
/*   Updated: 2025/04/25 19:14:28 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &rhs)
{
	if (this != &rhs) {
		this->_inputVec = rhs._inputVec;
		this->_dataBaseVec = rhs._dataBaseVec;
	}
	return (*this);
}

std::ifstream	BitcoinExchange::_FirstCheck(std::string input) {
	if (input.substr(input.length() - 4, 4) != ".txt" && input.substr(input.length() - 4, 4) != ".csv")
		throw std::invalid_argument((std::string("Error: wrong input name, use input.txt or input.csv")));
	
	std::ifstream inputFile(input);
	if (!inputFile)
		throw std::invalid_argument(std::string("Error: input file can't be opened"));

	std::string line;
	if(std::getline(inputFile, line))
		if(line != "date | value")
			std::cout << "Error: invalid header in input file, please write 'date | value'." << std::endl;
	return(inputFile);
}

int		BitcoinExchange::_InputFileIsValid(std::string current) {
	
		int	checker = 0;
		int year = std::atoi(current.substr(0, 4).c_str());
		int month = std::atoi(current.substr(5, 2).c_str());
		int day = std::atoi(current.substr(8, 2).c_str());
		std::string divider = current.substr(10, 3);
		if(year < 2009 || year > 2022 || day < 1 || day > 31 || month < 1 || month > 12 || divider != " | ")
		{
			checker = 1;
			std::cout << "Error: " << current.substr(0, 10) << " => wrong input." << std::endl;
			return(checker);
		}
		
		std::istringstream extract(current.substr(12));
		double value;
		extract >> value;
		if(extract.fail() || !extract.eof() || value < 0)
		{
			checker = 1;
			std::cout << "Error: " << current.substr(0, 9) << " => not a positive number." << std::endl;
		}
		else if(extract.fail() || !extract.eof() || value > 1000)
		{
			checker = 1;
			std::cout << "Error: " << current << " => number too large." << std::endl;
		}
		return(checker);
}

float	BitcoinExchange::stringToFloat(std::string value) {
	float result = 0;
	float sign = 1;
	float decimal = 0;
	float decimalSign = 1;
	bool isDecimal = false;

	size_t i = 0;
	while (i < value.length() && std::isspace(value[i])) {
		i++;
	}
	if (i < value.length() && (value[i] == '+' || value[i] == '-')) {
		if (value[i++] == '-')
			sign = -1;
		else
			sign = 1;
	}
	while (i < value.length() && (std::isdigit(value[i]) || value[i] == '.')) {
		if (value[i] == '.') {
			isDecimal = true;
			i++;
			continue;
		}
		if (isDecimal) {
			decimal = decimal * 10 + (value[i++] - '0');
			decimalSign *= 10;
		} else {
			result = result * 10 + (value[i++] - '0');
		}
	}
	return sign * (result + (decimal / decimalSign));
}

void	BitcoinExchange::_Operation(std::string input) {
	float		 inputValue = 0.0;
	float 		dataBaseValue = 0.0;
	std::string prevLine;
	
	std::vector<std::string>::iterator ite;
	for(ite = this->_dataBaseVec.begin(); ite != this->_dataBaseVec.end(); ++ite) {
		std::string &dataBaseLine = *ite;
		if (prevLine.empty())
			prevLine = *ite;
		if(input.substr(0, 10) == dataBaseLine.substr(0, 10)) {
			inputValue = stringToFloat(input.substr(12));
			dataBaseValue = stringToFloat(dataBaseLine.substr(11));
			// std::cout << "Input line = " << input.substr(0, 10) << std::endl;
			// std::cout << "Database line = " << dataBaseLine.substr(11) << std::endl;
			// std::cout << "Input value = " << inputValue << std::endl;
			// std::cout << "Database value = " << dataBaseValue << std::endl;
			break;
		}
		else if(prevLine < input.substr(0, 10) && dataBaseLine > input.substr(0, 10)) {
			inputValue = stringToFloat(input.substr(12));
			dataBaseValue = stringToFloat(prevLine.substr(11));
			// std::cout << "Input line = " << input.substr(0, 10) << std::endl;
			// std::cout << "Database line = " << prevLine.substr(11) << std::endl;
			// std::cout << "Input value = " << inputValue << std::endl;
			// std::cout << "Database value = " << dataBaseValue << std::endl;
			break;
		}
		if (ite + 1 == this->_dataBaseVec.end()) {
			inputValue = stringToFloat(input.substr(12));
			dataBaseValue = stringToFloat(prevLine.substr(11));
			
			float results = inputValue * dataBaseValue;
			std::cout << dataBaseLine.substr(0, 10) << " => " << input.substr(13) << " = " << results << std::endl;
			return;
			// std::cout << "Input line = " << input.substr(0, 10) << std::endl;
			// std::cout << "Database line = " << prevLine.substr(11) << std::endl;
			// std::cout << "Input value = " << inputValue << std::endl;
			// std::cout << "Database value = " << dataBaseValue << std::endl;
		}
		prevLine = *ite;
	}
	float results = inputValue * dataBaseValue;
	std::cout << input.substr(0, 10) << " => " << input.substr(13) << " = " << results << std::endl;
}

void	BitcoinExchange::change(std::string input, std::string db)
{
	std::ifstream inputFile(_FirstCheck(input));
	std::ifstream dataBaseFile(db);

	std::string line;
    while (std::getline(inputFile, line))
        this->_inputVec.push_back(line);
	
	while(std::getline(dataBaseFile, line))
		this->_dataBaseVec.push_back(line);

	
	std::vector<std::string>::iterator it;
	for (it = this->_inputVec.begin(); it != this->_inputVec.end(); ++it) {
		std::string &current = *it;
		if(!_InputFileIsValid(current))
			_Operation(current);
	}
}
