/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:42:20 by momox             #+#    #+#             */
/*   Updated: 2023/12/09 19:31:04 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string type);
	Ice(const Ice& src);
	~Ice();

	Ice& operator= (const Ice& src);
	Ice* clone() const;
	// void use(ICharacter& target);
};

#endif
