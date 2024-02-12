/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:10 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:53:47 by mgeisler         ###   ########.fr       */
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

Cat& Cat::operator=(const Cat& src)
{
	(void)src;
	std::cout << "Copy assignment operator called\n";
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
