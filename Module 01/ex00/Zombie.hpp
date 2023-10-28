/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:48:35 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 19:16:03 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
public:
	void announce(void)
	{
		std::cout << getName() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void setName(std::string buff)
	{
		_name = buff;
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

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
