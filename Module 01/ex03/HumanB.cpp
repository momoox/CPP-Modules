/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:13:54 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:16:41 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void HumanB::setWeapon(Weapon &club)
{
	this->_katana = &club;
}

std::string HumanB::getName(void)
{
	return (this->_name);
}

void HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << _katana->getType() << std::endl;
}

HumanB::~HumanB(void)
{
	return ;
}