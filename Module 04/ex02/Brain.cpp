/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:51:28 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 19:47:44 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called.\n";
}

Brain::Brain(const Brain& fixed)
{
	std::cout << "Brain constructor copy called.\n";
	*this = fixed;
}

Brain& Brain::operator=(const Brain& fixed)
{
	std::cout << "Copy assignment operator Brain called\n";
	if (this != &fixed)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = fixed.ideas[i]; 
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called.\n";
}