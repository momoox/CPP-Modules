/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:26:15 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:24:41 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define NC "\e[0m"
#define RED "\e[0;31m"
#define CYN "\e[0;36m"
#define CYNB "\e[46m"
#define BBB "\e[104;5m"
#define BMB "\e[105;5m"
#define REDB "\e[41;5m"
#define AAA "\e[48;5;33m"

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
public:
	Contact repertory[8];
	PhoneBook(void);
	~PhoneBook(void);

	void print_contact(void);
	void contact_list(void);
	void get_index(std::string buff);
	std::string search_contact(std::string contact);
};


void	welcome(void);
void	exit_phone(void);
void	commands(void);
int		stringToInteger(const std::string& str);

#endif
