/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:02:11 by edelarbr          #+#    #+#             */
/*   Updated: 2024/06/14 18:46:44 by mgeisler         ###   ########.fr       */
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
		std::cout << exchange.change(std::string(argv[1]), "data.csv") << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
// container map ? & vector ?