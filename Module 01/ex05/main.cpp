/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:30:55 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:06:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl Harl;
	std::string input;

	while (1)
	{
		std::cout << std::endl;
		std::cout << "Enter a level: " << std::endl;
		std::cout << "Ex: 'debug', 'info', 'warning' or 'error'\n";
		std::cout << "Type 'exit' to exit the program.\n";
		if (!std::getline(std::cin, input))
			 return (0);
		std::cout << std::endl;
		Harl.complain(input);
		if (input == "exit")
			break ;
	}
	return (0);
}
