/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:10 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:25:22 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called.\n";
	this->_type = "Cat";
	this->_brain = new Brain();
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
	std::cout << "Copy assignment operator Cat called\n";
	if (this != &fixed)
	{
		this->_type = fixed._type;
		this->_brain = new Brain(*fixed._brain);
	}
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->_type);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called.\n";
	delete(this->_brain);
}
