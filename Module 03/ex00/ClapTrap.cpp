/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:04:44 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 17:52:25 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called.\n\n";
	this->_Attack = 0;
	this->_Energy = 10;
	this->_Hitpoint = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor called.\n\n";
	this->_name = Name;
	this->_Attack = 0;
	this->_Energy = 10;
	this->_Hitpoint = 10;
}

// std::string ClapTrap::getName(void) const
// {
// 	return (this->_name);
// }

void ClapTrap::setHitpoint(int amount)
{
	this->_Hitpoint = amount;
}

int ClapTrap::getHitpoint() const
{
	return (this->_Hitpoint);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_Energy > 0)
	{
		this->_Energy = this->_Energy - 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!\n\n";
	}
	else
		std::cout << "No energy left. Can't attack.\n\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0 && (this->_Energy - 1) > 0 && this->_Hitpoint > 0)
	{
		this->setHitpoint(this->_Hitpoint + amount);
		this->_Energy = this->_Energy - 1;
		std::cout << "ClapTrap " << this->_name << " gained " << amount << " hit point.\n\n";
		std::cout << "Curren hitpoint is " << this->getHitpoint() <<".\n\n";
		std::cout << this->_Energy << " energy left.\n\n";
	}
	else if (this->_Hitpoint == 10)
		std::cout << "clapTrap " << this->_name << " already has all his hit points.\n\n";
	else if (this->_Energy <= 0)
		std::cout << "No energy left. Can't repair.\n\n";
	else
		return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hitpoint > 0 && (this->_Hitpoint - amount) > 0 && this->_Energy > 0)
	{
		this->setHitpoint(this->_Hitpoint - amount);
		std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit point. " << this->getHitpoint() << " hit point left.\n\n";
		if (this->_Hitpoint == 0)
			std::cout << "ClapTrap " << this->_name << " has no hitpoint left.\n\n";
	}
	else
		std::cout << "ClapTrap has no hit point left.\n\n";
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called.\n\n";
}