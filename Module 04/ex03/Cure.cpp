/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:55:58 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 18:15:10 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(std::string type)
{
	this->_type = type;
}

Cure::Cure(const Cure& src)
{
	*this = src;
}

Cure& Cure::operator=(const Cure& src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure() {}