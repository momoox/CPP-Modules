/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:49:16 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 16:50:30 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phone_book.hpp"

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

#endif