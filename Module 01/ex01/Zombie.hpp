/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:28:48 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:08:27 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	void announce(void);
	void setName(std::string Name);
	std::string getName(void) const;
	Zombie(void);
	~Zombie(void);
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif