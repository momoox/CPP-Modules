/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:10:06 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:25:35 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called.\n";
}

Animal::Animal(const Animal& fixed)
{
	std::cout << "Animal constructor copy called.\n";
	*this = fixed;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

Animal& Animal::operator=(const Animal& fixed)
{
	std::cout << "Copy assignment operator Animal called\n";
	if (this != &fixed)
	{
		this->_type = fixed._type;
		this->_brain = new Brain(*fixed._brain);
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound.\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called.\n";
}
