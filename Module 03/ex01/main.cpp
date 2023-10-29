/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:53:50 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 03:41:22 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap Bill("Bill");
	ScavTrap Jenny("Jenny");

	Jenny.guardGate();
	Bill.attack(Jenny.getName());
	Jenny.takeDamage(Bill.getAttack(Bill));
	Jenny.attack(Bill.getName());
	Bill.takeDamage(Jenny.getAttack(Jenny));
	Bill.beRepaired(10);
}