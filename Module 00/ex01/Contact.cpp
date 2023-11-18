/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:11:00 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 17:26:30 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::setName(std::string buff)
{
	_name = buff;
}

void Contact::setLastName(std::string buff)
{
	_lastName = buff;
}

void Contact::setNickname(std::string buff)
{
	_nickname = buff;
}

void Contact::setPhoneNum(std::string buff)
{
	_phoneNum = buff;
}

void Contact::setDarksecret(std::string buff)
{
	_dark_secret = buff;
}

std::string Contact::getName(void) const
{
	return (this->_name);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getphoneNum(void) const
{
	return (this->_phoneNum);
}

std::string Contact::getDarksecret(void) const
{
	return (this->_dark_secret);
}