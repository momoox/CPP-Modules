/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:26:17 by momox             #+#    #+#             */
/*   Updated: 2023/11/15 18:05:07 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called.\n";
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
	std::cout << "Bark ?\n";
}

WrongCat& WrongCat::operator=(const WrongCat& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->_type = fixed.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongAnimal destructor called.\n";
}