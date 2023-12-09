/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:39:53 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 19:00:09 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria::~AMateria()
{
}