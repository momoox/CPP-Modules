/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:24 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:39:46 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public AAnimal
{
private:
	Brain* _brain;
public:
	Dog(void);
	Dog(const Dog& fixed);
	virtual ~Dog(void);
	Dog& operator = (const Dog& fixed);
	
	std::string getType(void) const;
	virtual void makeSound() const;
};

#endif