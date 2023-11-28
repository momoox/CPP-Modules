/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:59:30 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:41:10 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _Hitpoint;
	unsigned int _Energy;
	unsigned int _Attack;

public:
	ClapTrap(void);
	ClapTrap(std::string Name);
	~ClapTrap(void);
	ClapTrap& operator = (const ClapTrap& fixed);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setHitpoint(int amount);
	int getHitpoint() const;

	std::string getName(void);
};

#endif