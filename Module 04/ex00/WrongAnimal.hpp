/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:17:10 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 17:56:07 by mgeisler         ###   ########.fr       */
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
	virtual ~WrongAnimal(void);
	WrongAnimal& operator = (const WrongAnimal& src);

	std::string getType(void) const;
	virtual void makeSound() const;
};

#endif