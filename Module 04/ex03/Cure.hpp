/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:43:22 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 19:31:17 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(std::string type);
	Cure(const Cure& src);
	~Cure();
	Cure& operator= (const Cure& src);

	Cure* clone() const;
	// void use(ICharacter& target);
};

#endif