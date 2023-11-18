/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:43 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 22:05:30 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
	// Brain* _brain;
public:
	Animal(void);
	Animal(const Animal& ani);
	~Animal(void);
	Animal& operator = (const Animal& fixed);

	virtual void makeSound() const;
	std::string getType() const;
};

#endif