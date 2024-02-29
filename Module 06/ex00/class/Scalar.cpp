/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:30:23 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/25 14:09:14 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &src) {
	*this = src;
}

Scalar::~Scalar() {}

Scalar &Scalar::operator = (const Scalar &rhs) {
	(void)rhs;
	return (*this);
}

void	Scalar::convert(const std::string &input) {
	if (isInt(input))
		convertInt(input);
	else if (isFloat(input))
		convertFloat(input);
	else if (isDouble(input))
		convertDouble(input);
	else if (isChar(input))
		convertChar(input);
	else
		exceptions(input);
}
