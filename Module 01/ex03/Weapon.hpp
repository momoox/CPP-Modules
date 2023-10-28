/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:56:28 by momox             #+#    #+#             */
/*   Updated: 2023/10/21 19:00:49 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
// # include "HumanA.hpp"
// # include "HumanB.hpp"

class Weapon
{
public:
	Weapon(std::string s) : _type(s){};
	~Weapon(void){};
	void setType(std::string type)
	{
		_type = type;
	}
	std::string getType(void) const
	{
		return (this->_type);
	}
private:
	std::string _type;
};

#endif