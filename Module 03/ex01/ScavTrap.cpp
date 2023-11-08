/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:02:34 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 17:53:51 by momox            ###   ########.fr       */
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

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode.\n\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor of ScavTrap called.\n\n";
}