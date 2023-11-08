/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:04:44 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 17:52:41 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor of ClapTrap called.\n\n";
	this->_Attack = 0;
	this->_Energy = 10;
	this->_Hitpoint = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Name constructor of ClapTrap called.\n\n";
	this->_name = Name;
	this->_Attack = 0;
	this->_Energy = 10;
	this->_Hitpoint = 10;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getAttack(ClapTrap& obj) const
{
	return (obj._Attack);
}

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
	if (this->getHitpoint() > 0 && this->_Energy > 0)
	{
		this->setHitpoint(this->_Hitpoint + amount);
		this->_Energy = this->_Energy - 1;
		std::cout << "ClapTrap " << this->getName() << " gained " << amount << " hit point.\n\n";
		std::cout << "Curren hitpoint is " << this->getHitpoint() <<".\n\n";
	}
	else if (this->_Hitpoint == 10)
		std::cout << "clapTrap " << this->getName() << " already has all his hit points.\n\n";
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
		std::cout << "ClapTrap " << this->getName() << " lost " << amount << " hit point. " << this->getHitpoint() << " hit point left.\n\n";
		if (this->_Hitpoint == 0)
			std::cout << "ClapTrap " << this->getName() << " has no hitpoint left.\n\n";
	}
	if (this->getHitpoint() <= 0)
		std::cout << "ClapTrap has no hit point left.\n\n";
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called.\n\n";
}