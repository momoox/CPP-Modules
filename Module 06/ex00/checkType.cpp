/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:33:40 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/25 14:50:09 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class/Scalar.hpp"

int	isInt(const std::string &input) {
	int i = 0;

	if (input[i] == '+' || input[i] == '-')
		i++;
	while (input[i] && isdigit(input[i]))
	{
		i++;
		if (input[i] == '\0')
			return (1);
	}
	return (0);
}


int	isFloat(const std::string &input) {
	int i = 0;

	if (input[i] == '+' || input[i] == '-')
		i++;
	while ((input[i] && isdigit(input[i])) || input[i] == '.')
	{
		if (input[i] == '.')
		{
			i++;
			while ((input[i] && isdigit(input[i])) || input[i] == 'f')
			{
				if (input[i] == 'f')
					return (1);
				i++;
			}
		}
		i++;
	}
	return (0);
}

int	isDouble(const std::string& input) {
	int	i = 0;

	if (input[i] == '+' || input[i] == '-')
		i++;
	while (input[i] && isdigit(input[i]))
	{
		if (input[i] == '.')
		{
			i++;
			while (input[i] && isdigit(input[i]))
			{
				if (input[i] == '\0')
					return (1);
				i++;
			}
		}
		i++;
	}
	return (0);
}

int	isChar(const std::string& input) {
	int i = 0;

	if (input.length() == '1' && input[i] >= 32 && input[i] <= 127)
		return (1);
	else
		return (0);
}
