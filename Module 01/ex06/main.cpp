/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:59:56 by momox             #+#    #+#             */
/*   Updated: 2023/10/22 21:19:35 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv)
{
	Harl Harl;
	int level = 0;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}

	if (!std::strcmp(argv[1], "DEBUG"))
		level = 1;
	else if (!std::strcmp(argv[1], "INFO"))
		level = 2;
	else if (!std::strcmp(argv[1], "WARNING"))
		level = 3;
	else if (!std::strcmp(argv[1], "ERROR"))
		level = 4;

	switch (level)
	{
		case 1:
			Harl.debug();
		case 2:
			Harl.info();
		case 3:
			Harl.warning();
		case 4:
			Harl.error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}