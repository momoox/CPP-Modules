/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:03:49 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 17:30:59 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

void Zombie::announce(void)
{
	std::cout << getName() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string buff)
{
	_name = buff;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << getName() << " has been destroyed." << std::endl;
	return ;
}