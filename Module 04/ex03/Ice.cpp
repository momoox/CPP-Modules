/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:44:53 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 18:15:18 by mgeisler         ###   ########.fr       */
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

Ice::~Ice() {}

