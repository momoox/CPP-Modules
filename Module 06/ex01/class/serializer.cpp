/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:10:17 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/28 19:08:48 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator = (const Serializer &rhs) {
	(void)rhs;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){

	return (reinterpret_cast<Data*>(raw));
}