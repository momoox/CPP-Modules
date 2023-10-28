/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:30:55 by momox             #+#    #+#             */
/*   Updated: 2023/10/22 19:14:47 by momox            ###   ########.fr       */
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
		if (!std::getline(std::cin, input))
			 return (0);
		std::cout << std::endl;
		Harl.complain(input);
		if (input == "EXIT")
			break ;
	}
	return (0);
}