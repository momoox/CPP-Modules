/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:05:05 by momox             #+#    #+#             */
/*   Updated: 2023/11/04 22:26:09 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Constructor Animal called\n";
	return ;
}

Animal::Animal(std::string Name)
{
	std::cout << "Constructor Animal Type called\n";
	this->type = Name;
}

Animal::Animal(const Animal& ani)
{
	std::cout << "Copy constructor Animal called\n";
	*this->ani;
}

void Animal::makeSound(void)
{
	if (this->getType() == "Cat")
		std::cout << "Miaou\n";
	
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called\n";
	return ;
}
