/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:48:15 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 16:59:02 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* Zomb;

	Zomb = newZombie("Patrick");
	delete(Zomb);
	randomChump("Steve");
	return (0);
}