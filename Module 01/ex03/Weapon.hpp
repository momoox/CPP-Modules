/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:56:28 by momox             #+#    #+#             */
/*   Updated: 2023/11/08 17:05:53 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

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