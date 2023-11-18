/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:03:11 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:13:23 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &gun);
	~HumanA(void);
	std::string getName(void);
	void attack(void);
private:
	std::string _name;
	Weapon *_gun;
};

#endif
