/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:02:34 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:47:57 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor of ScavTrap called.\n\n";
	this->_Attack = 20;
	this->_Energy = 50;
	this->_Hitpoint = 100;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "Name constructor of ScavTrap called.\n\n";
	this->_name = Name;
	this->_Attack = 20;
	this->_Energy = 50;
	this->_Hitpoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "Copy constructor called\n";
	*this = scav;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	(void)src;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode.\n\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor of ScavTrap called.\n\n";
}