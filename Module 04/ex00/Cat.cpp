/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:10 by momox             #+#    #+#             */
/*   Updated: 2023/11/15 18:06:48 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called.\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat& fixed)
{
	std::cout << "Cat constructor copy called.\n";
	*this = fixed;
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}

Cat& Cat::operator=(const Cat& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->_type = fixed.getType();
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->_type);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called.\n";
}
