/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:44:00 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/25 14:49:52 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Scalar.hpp"

int stringToInteger(const std::string& str)
{
    int result = 0;
    int sign = 1;

    size_t i = 0;
    while (i < str.length() && std::isspace(str[i])) {
        i++;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
		if (str[i++] == '-')
			sign = -1;
		else
			sign = 1;
    }
    while (i < str.length() && std::isdigit(str[i])) {
        result = result * 10 + (str[i++] - '0');
    }

    return sign * result;
}

float stringToFloat(const std::string &str)
{
	float result = 0;
	float sign = 1;
	float decimal = 0;
	float decimalSign = 1;
	bool isDecimal = false;

	size_t i = 0;
	while (i < str.length() && std::isspace(str[i])) {
		i++;
	}
	if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
		if (str[i++] == '-')
			sign = -1;
		else
			sign = 1;
	}
	while (i < str.length() && (std::isdigit(str[i]) || str[i] == '.')) {
		if (str[i] == '.') {
			isDecimal = true;
			i++;
			continue;
		}
		if (isDecimal) {
			decimal = decimal * 10 + (str[i++] - '0');
			decimalSign *= 10;
		} else {
			result = result * 10 + (str[i++] - '0');
		}
	}

	return sign * (result + (decimal / decimalSign));
}

void	convertInt(const std::string& input) {

	int value = stringToInteger(input);
	char ascii = static_cast<char>(value);

	if (value >= 32 && value <= 127)
		std::cout << "Char: " << "'" << ascii << "'" << std::endl;
	else if (value < 32 || value == 128)
		std::cout << "Char: Non displayable." << std::endl;
	
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	convertFloat(const std::string& input) {

	float value = stringToFloat(input);
	char ascii = static_cast<char>(static_cast<int>(value));

	if (value >= 32 && value <= 127)
		std::cout << "Char: " << "'" << ascii << "'" << std::endl;
	else if (value < 32 || value == 128)
		std::cout << "Char: Non displayable." << std::endl;
	
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	convertDouble(const std::string& input) {

	double value = stringToFloat(input);
	char ascii = static_cast<char>(static_cast<int>(value));

	if (value >= 32 && value <= 127)
		std::cout << "Char: " << "'" << ascii << "'" << std::endl;
	else if (value < 32 || value == 128)
		std::cout << "Char: Non displayable." << std::endl;
	
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << static_cast<float>(value) << ".f" << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	convertChar(const std::string& input) {

	int value = stringToInteger(input);
	char ascii = static_cast<char>(static_cast<int>(value));
	
	if (value >= 32 && value <= 127)
		std::cout << "Char: " << "'" << ascii << "'" << std::endl;
	else
		std::cout << "Char: Non displayable." << std::endl;
	
	std::cout << "Int: " << static_cast<int>(value) << std::endl;
	std::cout << "Float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	exceptions(const std::string& input) {
	if (input == "nan" || input == "nanf"){
		std::cout << "Char: Impossible." << std::endl;
		std::cout << "Int: Impossible." << std::endl;
		std::cout << "Float: nanf." << std::endl;
		std::cout << "Double: nan." << std::endl;
	}

	else if (input == "-inf" || input == "-inff"){
		std::cout << "Char: Impossible." << std::endl;
		std::cout << "Int: Impossible." << std::endl;
		std::cout << "Float: -inff." << std::endl;
		std::cout << "Double: -inf." << std::endl;
	}

	else if (input == "+inf" || input == "+inff"){
		std::cout << "Char: Impossible." << std::endl;
		std::cout << "Int: Impossible." << std::endl;
		std::cout << "Float: +inff." << std::endl;
		std::cout << "Double: +inf." << std::endl;
	}

	else
		std::cout << "Unknown symbole. Type something else." << std::endl;
}
