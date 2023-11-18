/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:10:47 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:13:36 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun)
{
	this->_name = name;
	this->_gun = &gun;
}

std::string HumanA::getName(void)
{
	return (this->_name);
}

void HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << _gun->getType() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}