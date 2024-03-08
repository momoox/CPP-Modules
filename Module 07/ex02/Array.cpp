/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:46:50 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/07 15:48:00 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){
	
}

Array::Array(unsigned int n){

}

Array::Array(const Array &src) {
	*this = src;
}

Array::~Array() {}

Array &Array::operator = (const Array &rhs) {
	if (this != &rhs) {
		
	}
	return (*this);
}
