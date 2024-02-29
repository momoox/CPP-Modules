/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:24:07 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/27 19:52:38 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base {
public:
	virtual ~Base();
	
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);
};

#endif
