/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:44:05 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:21:18 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
// # include "Animal.hpp"

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain(void);
	Brain(const Brain& ani);
	virtual ~Brain(void);
	Brain& operator= (const Brain& fixed);
};

#endif