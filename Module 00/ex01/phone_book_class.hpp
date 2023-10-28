/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:26:15 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 18:32:05 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

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

class Contact
{
public:
	void add_contact(void);

	void setName(std::string buff)
	{
		_name = buff;
	}
	void setLastName(std::string buff)
	{
		_lastName = buff;
	}
	void setNickname(std::string buff)
	{
		_nickname = buff;
	}
	void setPhoneNum(std::string buff)
	{
		_phoneNum = buff;
	}
	void setDarksecret(std::string buff)
	{
		_dark_secret = buff;
	}
	std::string getName(void) const
	{
		return (this->_name);
	}
	std::string getLastName(void) const
	{
		return (this->_lastName);
	}
	std::string getNickname(void) const
	{
		return (this->_nickname);
	}
	std::string getphoneNum(void) const
	{
		return (this->_phoneNum);
	}
	std::string getDarksecret(void) const
	{
		return (this->_dark_secret);
	}

private:
	std::string _name;
	std::string _lastName;
	std::string _nickname;
	std::string	_phoneNum;
	std::string _dark_secret;
};

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

#endif
