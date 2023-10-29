/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:38:46 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 04:44:35 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor of FragTrap called.\n\n";
	this->_Attack = 30;
	this->_Energy = 100;
	this->_Hitpoint = 100;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "Name constructor of FragTrap called.\n\n";
	this->_name = Name;
	this->_Attack = 30;
	this->_Energy = 100;
	this->_Hitpoint = 100;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " is giving everyone a high five !\n\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor of FragTrap called.\n\n";
}