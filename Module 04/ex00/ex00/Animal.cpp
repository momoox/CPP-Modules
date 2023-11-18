/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:10:06 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 19:34:15 by momox            ###   ########.fr       */
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
	std::cout << "Copy assignment operator called\n";
	this->_type = fixed.getType();
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
