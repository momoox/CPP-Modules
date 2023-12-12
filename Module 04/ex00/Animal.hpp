/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:43 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:55:21 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal(void);
	Animal(const Animal& ani);
	virtual ~Animal(void);
	Animal& operator = (const Animal& src);

	virtual void makeSound() const;
	std::string getType() const;
};

#endif