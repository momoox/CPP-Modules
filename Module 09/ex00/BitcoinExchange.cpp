/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:51:59 by edelarbr          #+#    #+#             */
/*   Updated: 2024/07/01 15:47:32 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	this->_value = 0;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &rhs)
{
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}

std::ifstream	BitcoinExchange::_FirstCheck(std::string input) {
	if (input.length() < 5 || (input.substr(input.length() - 4, 4) != ".txt" && input.substr(input.length() - 4, 4) != ".cvs"))
		throw std::invalid_argument((std::string("Error: wrong input name, use input.txt or input.cvs")));
	
	std::ifstream inputFile(input);
	if (!inputFile)
		throw std::invalid_argument(std::string("Error: input file can't be opened")); // - creation de l'objet ifstream

	std::string line;
	if(std::getline(inputFile, line))
		if(line != "date | value")
			std::cout << "Error: invalid header in input file, please write 'date | value'." << std::endl;
	return(inputFile);
}

void	BitcoinExchange::_InputFileIsValid(std::string input, std::string current) {
	
		int year = std::atoi(current.substr(0, 4).c_str());
		int day = std::atoi(current.substr(5, 2).c_str());
		int month = std::atoi(current.substr(8, 2).c_str());
		std::string divider = current.substr(10, 3);
		if(year < 2009 || year > 2022 || day < 1 || day > 31 || month < 1 || month > 12 || divider != " | ")
		{
			std::cout << current;
			std::cout << " -> wrong input." << std::endl;
		}
		
		std::istringstream extract(current.substr(12));
		double value;
		extract >> value;
		if(extract.fail() || !extract.eof() || value < 0)
		{
			std::cout << current;
			std::cout << " -> not a positive number." << std::endl;
		}
		else if(extract.fail() || !extract.eof() || value > 1000)
		{
			std::cout << current;
			std::cout << " -> number too large." << std::endl;
		}
	//dans un iterateur
	//si les 4 premiers cara sont compris entre 2009 et 2022
	//si les 2 cara, place 5/6 sont compris entre 01 et 31 (debut de string 0)
	//si les 2 cara, place 8/9 sont compris entre 01 et 12
	// si 3 cara 10,11,12 sont space | space
	//si la valeur a partir de 12 est un int ou un float et entre 0 et 1000
	// string stream
}

std::string	BitcoinExchange::change(std::string input, std::string db)
{
	(void) db;
	std::ifstream inputFile(_FirstCheck(input));

	std::string line;
    while (std::getline(inputFile, line))
        this->_inputVec.push_back(line);

	std::vector<std::string>::iterator it;
	for (it = this->_inputVec.begin(); it != this->_inputVec.end(); ++it) {
		std::string &current = *it;
		_InputFileIsValid(input, current);
		//calcul et tout ca
	}

	return ("");
}
