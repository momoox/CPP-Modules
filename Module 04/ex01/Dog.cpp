/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:01 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 22:12:58 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called.\n";
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& fixed)
{
	std::cout << "Dog constructor copy called.\n";
	*this = fixed;
}

std::string Dog::getType(void) const
{
	return(this->_type);
}

void	Dog::makeSound() const
{
	std::cout << "Bark\n";
}

Dog& Dog::operator=(const Dog& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->_type = fixed.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called.\n";
	delete(this->_brain);
}
