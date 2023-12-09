/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:55:58 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 18:44:16 by momox            ###   ########.fr       */
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

// void Cure::use(ICharacter& target)
// {
// 	std::cout << "* heals " << target.getName() << "'s wounds *\n";
// }

Cure::~Cure() {}