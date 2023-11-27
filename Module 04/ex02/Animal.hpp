/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:43 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:38:45 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
	Brain *_brain;
public:
	AAnimal(void);
	AAnimal(const AAnimal& ani);
	virtual ~AAnimal(void);
	AAnimal& operator = (const AAnimal& fixed);

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif