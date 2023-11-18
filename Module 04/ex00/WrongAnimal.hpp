/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:17:10 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 19:34:46 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& fixed);
	~WrongAnimal(void);
	WrongAnimal& operator = (const WrongAnimal& fixed);

	std::string getType(void) const;
	virtual void makeSound() const;
};

#endif