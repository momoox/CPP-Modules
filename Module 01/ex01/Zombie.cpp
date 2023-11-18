/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:47:32 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:08:41 by momox            ###   ########.fr       */
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

void Zombie::setName(std::string Name)
{
	_name = Name;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

Zombie::~Zombie(void)
{
	return ;
}