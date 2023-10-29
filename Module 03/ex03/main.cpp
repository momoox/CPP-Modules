/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:53:50 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 05:08:32 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap Bill("Bill");
	ScavTrap Jenny("Jenny");
	FragTrap BDB ("BDB");
	DiamondTrap Nevaspid("Nevaspid");

	Jenny.guardGate();
	Bill.attack(Jenny.getName());
	Jenny.takeDamage(Bill.getAttack(Bill));
	Jenny.attack(Bill.getName());
	Nevaspid.whoAmI();
	Bill.takeDamage(Jenny.getAttack(Jenny));
	Bill.beRepaired(10);
	BDB.highFivesGuys();
}