/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:32:57 by mgeisler          #+#    #+#             */
/*   Updated: 2024/06/07 19:36:00 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack (const MutantStack& src) {
	*this = src;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &rhs) {
	if (this != &rhs)
		this = rhs;
	return(*this);
}
