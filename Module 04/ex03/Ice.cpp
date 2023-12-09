/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:44:53 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 18:44:03 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(std::string type)
{
	this->_type = type;
}

Ice::Ice(const Ice& src)
{
	*this = src;
}

Ice& Ice::operator=(const Ice& src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return(*this);
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

// void Ice::use(ICharacter& target)
// {
// 	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
// }

Ice::~Ice() {}

