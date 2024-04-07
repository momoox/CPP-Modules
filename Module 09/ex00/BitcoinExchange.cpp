/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:51:59 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/11 18:10:05 by mgeisler         ###   ########.fr       */
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

void	BitcoinExchange::InputFileIsValid(std::string input) {
	// if (input.length() < 5 || input.substr(input.length() - 4, 4) != ".txt")
	// 	throw std::invalid_argument((std::string("Error: wrong format").append(" bite")));
	std::ifstream inputFile(input);
	if (!inputFile)
		throw std::invalid_argument(std::string("Error: input file can't be opened"));
	
}

std::string	BitcoinExchange::change(std::string input, std::string db)
{
	(void) db;
	InputFileIsValid(input);

	return ("");
}
