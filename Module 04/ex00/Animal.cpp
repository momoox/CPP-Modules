/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:10:06 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:55:49 by mgeisler         ###   ########.fr       */
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

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
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
