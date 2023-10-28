/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:05:10 by momox             #+#    #+#             */
/*   Updated: 2023/10/21 19:34:17 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name) : _name(name) {}
	~HumanB(void){};
	void setWeapon(Weapon &club){_katana = &club;}
	std::string getName(void)
	{
		return (this->_name);
	}
	void attack(void)
	{
		std::cout << getName() << " attacks with their " << _katana->getType() << std::endl;
	}
private:
	Weapon *_katana;
	std::string _name;
};

#endif