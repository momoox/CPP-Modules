/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:28:48 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 20:28:32 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	void announce(void)
	{
		std::cout << getName() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void setName(std::string Name)
	{
		_name = Name;
	}
	std::string getName(void) const
	{
		return (this->_name);
	}
	Zombie(void);
	~Zombie(void);
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif