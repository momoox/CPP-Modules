/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:44:05 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 22:01:36 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain(void);
	Brain(const Brain& ani);
	~Brain(void);
	Brain& operator = (const Brain& fixed);
};

#endif