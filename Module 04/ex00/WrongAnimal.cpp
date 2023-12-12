/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:23:02 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 18:05:56 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& fixed)
{
	std::cout << "WrongAnimal constructor copy called.\n";
	*this = fixed;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called.\n";
}