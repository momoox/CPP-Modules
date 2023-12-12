/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:59:56 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:13:41 by mgeisler         ###   ########.fr       */
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

	if ((std::string)argv[1] == "DEBUG")
		level = 1;
	else if ((std::string)argv[1] == "INFO")
		level = 2;
	else if ((std::string)argv[1] == "WARNING")
		level = 3;
	else if ((std::string)argv[1] == "ERROR")
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