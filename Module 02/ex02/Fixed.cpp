/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:12:01 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:38:53 by momox            ###   ########.fr       */
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

/* ----------constructors----------- */
Fixed::Fixed(void) 
{
	this->_fixed_point = 0;
}

Fixed::Fixed(const Fixed &fixed) 
{
	*this = fixed;
}

Fixed::Fixed(const int value) 
{
	_fixed_point = value << _fractional;
}

Fixed::Fixed(const float value) 
{
	_fixed_point = roundf(value * myPow(2, _fractional));
}


/* ----------Float/Int----------- */


float Fixed::toFloat( void ) const 
{
	return (_fixed_point / myPow(2, _fractional));
}

int Fixed::toInt( void ) const 
{
	return (_fixed_point >> _fractional);
}


/* ----------Get----------- */


int Fixed::getRawBits(void) const 
{
	return (this->_fixed_point);
}


/* ----------Arithmetic----------- */


Fixed& Fixed::operator=(const Fixed& fixed) 
{
	this->_fixed_point = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(Fixed fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(Fixed fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(Fixed fixed)
{
	return (this->toFloat() / fixed.toFloat());
}


/* ----------comparison----------- */


std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool Fixed::operator==(const Fixed& fixed) const
{
	if (this->_fixed_point == fixed.getRawBits())
		return (true);
	else
		return (false);	
}

bool Fixed::operator>(const Fixed& fixed) const
{
	if (this->_fixed_point > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& fixed) const
{
	if (this->_fixed_point < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	if (this->_fixed_point >= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	if (this->_fixed_point <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	if (this->_fixed_point != fixed.getRawBits())
		return (true);
	else
		return (false);
}


/* ----------Min/Max----------- */


Fixed Fixed::min(Fixed& fixed, Fixed& fixed_2)
{
	if (fixed < fixed_2)
		return (fixed);
	else
		return (fixed_2);
}

Fixed Fixed::min(const Fixed& fixed, const Fixed& fixed_2)
{
	if (fixed < fixed_2)
		return (fixed);
	else
		return (fixed_2);
}

Fixed Fixed::max(Fixed& fixed, Fixed& fixed_2)
{
	if (fixed > fixed_2)
		return (fixed);
	else
		return (fixed_2);
}

Fixed Fixed::max(const Fixed& fixed, const Fixed& fixed_2)
{
	if (fixed > fixed_2)
		return (fixed);
	else
		return (fixed_2);
}


/* ----------incr/decr----------- */


Fixed Fixed::operator++(int)
{
	Fixed tmp (*this);
	this->_fixed_point++;

	return (tmp);
}

Fixed& Fixed::operator++()
{
	this->_fixed_point++;

	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp (*this);
	this->_fixed_point--;

	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->_fixed_point--;

	return (*this);
}


/* ----------Destructor----------- */


Fixed::~Fixed(void){}
