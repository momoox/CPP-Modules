/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:05:10 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:20:26 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &club);
	std::string getName(void);
	void attack(void);
private:
	Weapon *_katana;
	std::string _name;
};

#endif