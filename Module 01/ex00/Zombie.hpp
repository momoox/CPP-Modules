/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:48:35 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 17:30:48 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
public:
	void announce(void);
	void setName(std::string buff);
	std::string getName(void) const;
	Zombie(void);
	~Zombie(void);
private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
