/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:31:25 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:26:16 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int stringToInteger(const std::string& str)
{
    int result = 0;
    int sign = 1;

    size_t i = 0;
    while (i < str.length() && std::isspace(str[i])) {
        i++;
    }
    if (i < str.length() && (str[i] == '+' || str[i] == '-')) {
        sign = (str[i++] == '-') ? -1 : 1;
    }
    while (i < str.length() && std::isdigit(str[i])) {
        result = result * 10 + (str[i++] - '0');
    }

    return sign * result;
}

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
	
	std::cout << "--------------------------------------------------------------" << std::endl;
	std::cout << "|Index|First Name| Last Name|  Nickname|    Number|DarkSecret|" << std::endl;
	std::cout << "|-----|----------|----------|----------|----------|----------|" << std::endl;
	while (i <= 8)
	{
		std::cout << "|";
		std::cout << std::setw(5) << i << "|";
		std::cout << std::setw(10) << search_contact(repertory[i].getName()) << "|";
		std::cout << std::setw(10) << search_contact(repertory[i].getLastName()) << "|";
		std::cout << std::setw(10) << search_contact(repertory[i].getNickname()) << "|";
		std::cout << std::setw(10) << search_contact(repertory[i].getphoneNum()) << "|";
		std::cout << std::setw(10) << search_contact(repertory[i].getDarksecret()) << "|" << std::endl;
		i++;
	}
	std::cout << " -------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::get_index(std::string buff)
{
	int i = 1;
	int	buffi = 0;

	buffi = stringToInteger(buff);
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
	// std::getline(std::cin, buff);
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