/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:53:57 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 14:38:24 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default constructor of DiamondTrap called.\n\n";
	this->_Attack = this->ScavTrap::_Attack;
	this->_Energy = this->ScavTrap::_Energy;
	this->_Hitpoint = this->FragTrap::_Hitpoint;
}

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout << "Name constructor of DiamondTrap called.\n\n";
	this->_name = Name;
	ClapTrap::_name = Name + " _clap_name";
	this->ScavTrap::_Attack;
	this->ScavTrap::_Energy;
	this->FragTrap::_Hitpoint;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my Claptrap name is " << this->ClapTrap::getName() << ".\n\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor of DiamondTrap called.\n\n";
}
