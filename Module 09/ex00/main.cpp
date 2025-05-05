/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:02:11 by edelarbr          #+#    #+#             */
/*   Updated: 2025/05/05 20:57:52 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange exchange;

	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}

	try {
		exchange.change(std::string(argv[1]), "data.csv");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
