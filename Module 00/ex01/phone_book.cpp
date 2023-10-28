/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:31:25 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 17:12:18 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book_class.hpp"

void	exit_phone(void)
{
	exit(0);
}

std::string PhoneBook::search_contact(std::string contact)
{
	std::string format;
	int i = -1;

	if (contact.length() > 10)
	{
		while (++i < 9)
			format += contact[i];
		format.append(".");
	}
	else
		return (contact);
	return (format);
}

void PhoneBook::print_contact(void)
{
	int i = 1;
	
	std::cout << BBB << "--------------------------------------------------------------" << NC << std::endl;
	std::cout << BBB << "|Index|First Name| Last Name|  Nickname|    Number|DarkSecret|" << NC << std::endl;
	std::cout << BBB << "|-----|----------|----------|----------|----------|----------|" << NC << std::endl;
	while (i <= 8)
	{
		std::cout << BMB << "|" << NC;
		std::cout << BMB << std::setw(5) << i << "|" << NC;
		std::cout << BMB << std::setw(10) << search_contact(repertory[i].getName()) << "|" << NC;
		std::cout << BMB << std::setw(10) << search_contact(repertory[i].getLastName()) << "|" << NC;
		std::cout << BMB << std::setw(10) << search_contact(repertory[i].getNickname()) << "|" << NC;
		std::cout << BMB << std::setw(10) << search_contact(repertory[i].getphoneNum()) << "|" << NC;
		std::cout << BMB << std::setw(10) << search_contact(repertory[i].getDarksecret()) << "|" << std::endl << NC;
		i++;
	}
	std::cout << BMB << " -------------------------------------------------------------" << NC << std::endl;
	std::cout << std::endl;
}

void PhoneBook::get_index(std::string buff)
{
	int i = 1;
	int	buffi = 0;

	buffi = std::stoi(buff);
	if (buffi == 0)
		return ;
	while (buffi != i)
		i++;
	if (buffi == i)
	{
		std::cout << "Name:" << std::endl;
		std::cout << "  " << repertory[i].getName() << std::endl;
		std::cout << std::endl;
		std::cout << "Last Name:" << std::endl;
		std::cout << "  " << repertory[i].getLastName() << std::endl;
		std::cout << std::endl;
		std::cout << "Nickname:" << std::endl;
		std::cout << "  " << repertory[i].getNickname() << std::endl;
		std::cout << std::endl;
		std::cout << "Phone Number:" << std::endl;
		std::cout << "  " << repertory[i].getphoneNum() << std::endl;
		std::cout << std::endl;
		std::cout << "Darkest Secret:" << std::endl;
		std::cout << "  " << repertory[i].getDarksecret() << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
}

void PhoneBook::contact_list(void)
{
	std::string buff;

	print_contact();
	std::cout << "Enter an index to have details of a specific contact:  [_/8]" << std::endl;
	std::cin >> buff;
	std::cout << std::endl;
	if (buff == "1" || buff == "2" || buff == "3" || buff == "4" || buff == "5" || buff == "6" || buff == "7" || buff == "8")
		get_index(buff);
	else
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
}

void	Contact::add_contact(void)
{
	std::string	buff;

	std::cout << "Enter your name:" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, buff);
	setName(buff);
	std::cout << "Enter your last name:" << std::endl;
	std::getline(std::cin, buff);
	setLastName(buff);
	std::cout << "Enter your nickname:" << std::endl;
	std::getline(std::cin, buff);
	setNickname(buff);
	std::cout << "Enter your phone number:" << std::endl;
	std::getline(std::cin, buff);
	setPhoneNum(buff);
	std::cout << "Enter your darkest secret...:" << std::endl;
	std::getline(std::cin, buff);
	setDarksecret(buff);
	std::cout << "Contact created" << std::endl << std::endl;
}

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}