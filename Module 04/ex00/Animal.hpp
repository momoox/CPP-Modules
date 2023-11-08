/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:00:44 by momox             #+#    #+#             */
/*   Updated: 2023/11/04 22:21:58 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(std::string Name);
	Animal(const Animal& ani);
	~Animal(void);

	void makeSound(void);
	std::string getType(void);
protected:
	std::string type;
};

#endif