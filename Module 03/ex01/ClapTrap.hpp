/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:59:30 by momox             #+#    #+#             */
/*   Updated: 2023/10/29 04:25:12 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
// # include "ScavTrap.hpp"

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _Hitpoint;
	unsigned int _Energy;
	unsigned int _Attack;

public:
	ClapTrap(void);
	ClapTrap(std::string Name);
	~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getAttack(ClapTrap& obj) const;
	void setHitpoint(int amount);
	int getHitpoint() const;
};

// class ScavTrap : public ClapTrap
// {
// public:
// 	ScavTrap(void);
// 	ScavTrap(std::string Name);
// 	~ScavTrap(void);
// 	void guardGate(void);
// };

#endif