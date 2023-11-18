/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:29 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 22:05:49 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;
public:
	Cat(void);
	Cat(const Cat& fixed);
	~Cat(void);
	Cat& operator = (const Cat& fixed);
	
	std::string getType(void) const;
	void makeSound() const;
};

#endif