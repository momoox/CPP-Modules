/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:07:07 by momox             #+#    #+#             */
/*   Updated: 2023/10/28 19:40:00 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Bill("Bill");
	std::string target = "Steve";

	Bill.attack(target);
	Bill.takeDamage(4);
	Bill.beRepaired(2);

	return (0);
}