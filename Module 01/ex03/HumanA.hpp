/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:03:11 by momox             #+#    #+#             */
/*   Updated: 2023/10/21 19:33:58 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &gun) : _name(name), _gun(&gun) {}
	~HumanA(void){};
	std::string getName(void)
	{
		return (this->_name);
	}
	void attack(void)
	{
		std::cout << getName() << " attacks with their " << _gun->getType() << std::endl;
	}
private:
	std::string _name;
	Weapon *_gun;
};

#endif
