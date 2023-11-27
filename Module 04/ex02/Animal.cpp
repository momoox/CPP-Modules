/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:10:06 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:39:08 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Animal constructor called.\n";
}

AAnimal::AAnimal(const AAnimal& fixed)
{
	std::cout << "Animal constructor copy called.\n";
	*this = fixed;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal& AAnimal::operator=(const AAnimal& fixed)
{
	std::cout << "Copy assignment operator Animal called\n";
	if (this != &fixed)
	{
		this->_type = fixed._type;
		this->_brain = new Brain(*fixed._brain);
	}
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal sound.\n";
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called.\n";
}
