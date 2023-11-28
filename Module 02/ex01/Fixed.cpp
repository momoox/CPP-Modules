/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:54:30 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:37:40 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

double myPow(double base, int exponent)
{
    if (exponent == 0) {
        return 1.0;
    }

    double result = 1.0;
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->_fixed_point = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->_fixed_point = value << _fractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->_fixed_point = roundf(value * myPow(2, _fractional));
}

float Fixed::toFloat( void ) const
{
	return (this->_fixed_point / myPow(2, _fractional));
}

int Fixed::toInt( void ) const
{
	return (this->_fixed_point >> _fractional);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point);
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->_fixed_point = fixed.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
