/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:35:55 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 19:54:27 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombies;

	zombies = new Zombie [N];
	zombies->setName(name);
	while (N)
	{
		zombies->announce();
		N--;
	}
	return (zombies);
}