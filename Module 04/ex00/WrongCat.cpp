/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:26:17 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 18:00:46 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called.\n";
	this->_type = "Cat";
}

WrongCat::WrongCat(const WrongCat& fixed)
{
	std::cout << "WrongAnimal constructor copy called.\n";
	*this = fixed;
}

std::string WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::makeSound() const
{
	std::cout << "Moo\n";
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongAnimal destructor called.\n";
}