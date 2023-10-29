/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:53:50 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 04:44:25 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Bill("Bill");
	ScavTrap Jenny("Jenny");
	FragTrap BDB ("BDB");

	Jenny.guardGate();
	Bill.attack(Jenny.getName());
	Jenny.takeDamage(Bill.getAttack(Bill));
	Jenny.attack(Bill.getName());
	Bill.takeDamage(Jenny.getAttack(Jenny));
	Bill.beRepaired(10);
	BDB.highFivesGuys();
}