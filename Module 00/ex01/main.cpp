/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:25:47 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 16:50:20 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book_class.hpp"

void	welcome(void)
{
	std::cout << std::endl;
	std::cout << RED << "------------------------------------" << std::endl;
	std::cout << "--Welcome to the Awesone PhoneBook!--" << std::endl;
	std::cout << "------------------------------------" << NC << std::endl;
	std::cout << std::endl;
}

void	commands(void)
{
	std::cout << CYN << "Please, enter one of the following command:" << std::endl;
	std::cout << "---ADD---  ---SEARCH---  ---EXIT---" << NC << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	PhoneBook repertory;
	std::string buff;
	int i = 1;

	welcome();
	while (1)
	{
		if (i == 8)
			i = 1;
		commands();
		std::cin >> buff;
		if (buff == "EXIT" || std::cin.eof())
			exit_phone();
		if (buff == "ADD")
		{
			repertory.repertory[i].add_contact();
			i++;
		}
		if (buff == "SEARCH")
			repertory.contact_list();
	}
}
