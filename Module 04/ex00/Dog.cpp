/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:01 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:54:33 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called.\n";
	this->_type = "Dog";
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

Dog& Dog::operator=(const Dog& src)
{
	(void)src;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called.\n";
}
