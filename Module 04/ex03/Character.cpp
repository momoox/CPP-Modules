/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:21:19 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 19:32:39 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(const Character& src)
{
	*this = src;
}

Character& Character::operator= (const Character& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = src._inventory[i];
		}
		this->_name = src._name;
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << "Item added to " << this->getName() << "'s inventory.\n";
			return ;
		}
	}
	if (i >= 4)
	{
		std::cout << "Inventory of " << this->getName() << " is full.\n";
		return ;
	}
}

void Character::unequip(int idx)
{
	if (idx > 4)
	{
		std::cout << "Inventory slot non existant.\n";
		return ;
	}
	this->_inventory[idx] = 0;
	std::cout << "Item removed from inventory successfully.\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 4)
	{
		std::cout << "Inventory slot non existant.\n";
		return ;
	}
	if (idx < 4 && this->_inventory[idx])
		(this->_inventory[idx])->use(target);
}

Character::~Character()
{
	for (int i = 4; i > 0; i--)
		delete this->_inventory[i];
}