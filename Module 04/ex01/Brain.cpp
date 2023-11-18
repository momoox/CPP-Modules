/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:51:28 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 21:53:12 by momox            ###   ########.fr       */
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

Brain::~Brain(void)
{
	std::cout << "Brain destructor called.\n";
}