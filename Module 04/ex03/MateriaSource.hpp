/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:36:22 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 14:01:28 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _memory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& src);
	virtual ~MateriaSource();
	MateriaSource& operator= (const MateriaSource& src);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const& type);
};

#endif