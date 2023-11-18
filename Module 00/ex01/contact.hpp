/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:49:16 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 17:24:36 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

class Contact
{
public:
	void add_contact(void);
	void setName(std::string buff);
	void setLastName(std::string buff);
	void setNickname(std::string buff);
	void setPhoneNum(std::string buff);
	void setDarksecret(std::string buff);
	std::string getName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getphoneNum(void) const;
	std::string getDarksecret(void) const;

private:
	std::string _name;
	std::string _lastName;
	std::string _nickname;
	std::string	_phoneNum;
	std::string _dark_secret;
};

#endif