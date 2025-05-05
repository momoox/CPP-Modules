/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:51:59 by edelarbr          #+#    #+#             */
/*   Updated: 2025/05/05 21:18:00 by mgeisler         ###   ########.fr       */
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

void	BitcoinExchange::_FirstCheck(std::string input, std::ifstream &inputFile) {
	if (input.substr(input.length() - 4, 4) != ".txt" && input.substr(input.length() - 4, 4) != ".csv")
		throw std::invalid_argument((std::string("Error: wrong input name, use input.txt or input.csv")));
	
	inputFile.open(input.c_str());
	if (!inputFile)
		throw std::invalid_argument(std::string("Error: input file can't be opened"));

	std::string line;
	if(std::getline(inputFile, line))
		if(line != "date | value")
			std::cout << "Error: invalid header in input file, please write 'date | value'." << std::endl;
	// return(inputFile);
}

int	BitcoinExchange::_InputFileIsValid(std::string current) {
    
    // Ignorer la ligne d'en-tête pour éviter les erreurs
    if (current == "date | value")
        return 1;
        
    int	checker = 0;
    
    // Vérifier que la ligne a au moins la longueur minimale requise
    if (current.length() < 13) {
        std::cout << "Error: bad input => " << current << std::endl;
        return 1;
    }
    
    int year = atoi(current.substr(0, 4).c_str());
    int month = atoi(current.substr(5, 2).c_str());
    int day = atoi(current.substr(8, 2).c_str());
    std::string divider = current.substr(10, 3);
    
    // Vérifier le format de date YYYY-MM-DD | VALUE
    if (current[4] != '-' || current[7] != '-') {
        std::cout << "Error: bad input format => " << current << std::endl;
        return 1;
    }
    
    if(year < 2009 || year > 2022 || day < 1 || day > 31 || month < 1 || month > 12 || divider != " | ")
    {
        checker = 1;
        std::cout << "Error: bad input => " << current << std::endl;
        return checker;
    }
    
    // Vérifier les jours selon les mois
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        std::cout << "Error: bad input => " << current << std::endl;
        return 1;
    }
    // Février
    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
            std::cout << "Error: bad input => " << current << std::endl;
            return 1;
        }
    }
        
    std::istringstream extract(current.substr(13)); // Changé de 12 à 13 pour ignorer l'espace après |
    double value;
    extract >> value;
    if(extract.fail() || !extract.eof() || value < 0)
    {
        checker = 1;
        std::cout << "Error: not a positive number." << std::endl;
    }
    else if(value > 1000)
    {
        checker = 1;
        std::cout << "Error: number too large." << std::endl;
    }
    return checker;
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
	std::ifstream inputFile;
	_FirstCheck(input, inputFile);
    std::ifstream dataBaseFile(db.c_str());

	std::string line;
    while (std::getline(inputFile, line)) {
        this->_inputVec.push_back(line);
	}
	
	while(std::getline(dataBaseFile, line)) {
		this->_dataBaseVec.push_back(line);
	}
	
	std::vector<std::string>::iterator it;
	for (it = this->_inputVec.begin(); it != this->_inputVec.end(); ++it) {
		std::string &current = *it;
		if(!_InputFileIsValid(current))
			_Operation(current);
	}
}
