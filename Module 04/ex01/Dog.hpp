/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:24 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 22:05:08 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:
	Dog(void);
	Dog(const Dog& fixed);
	~Dog(void);
	Dog& operator = (const Dog& fixed);
	
	std::string getType(void) const;
	void makeSound() const;
};

#endif