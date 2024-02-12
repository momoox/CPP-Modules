/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:36:08 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:45:42 by mgeisler         ###   ########.fr       */
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


ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called\n";
	*this = clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_Hitpoint = src._Hitpoint;
		this->_Energy = src._Energy;
		this->_Attack = src._Attack;
	}
	return (*this);
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
		this->_Energy = this->_Energy - 1;
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