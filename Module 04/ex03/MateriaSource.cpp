/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:42:35 by momox             #+#    #+#             */
/*   Updated: 2023/12/12 18:16:47 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = 0;
	*this = src;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			this->_memory[i] = src._memory[i]->clone();
		*this = src;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* src)
{
	if (src == 0)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] == 0)
		{
			this->_memory[i] = src->clone();
			delete src;
			return ;
		}
	}
	delete src;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_memory[i] != 0 && this->_memory[i]->getType() == type)
		{
			return (this->_memory[i]->clone());
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_memory[i];
}