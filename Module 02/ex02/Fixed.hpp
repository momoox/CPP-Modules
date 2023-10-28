/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:48:22 by momox             #+#    #+#             */
/*   Updated: 2023/10/28 18:24:06 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	Fixed& operator=(const Fixed& fixed);
	Fixed operator+(Fixed fixed);
	Fixed operator-(Fixed fixed);
	Fixed operator*(Fixed fixed);
	Fixed operator/(Fixed fixed);

	bool operator==(const Fixed& fixed) const;
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;

	static Fixed min(Fixed& fixed, Fixed& fixed_2);
	static Fixed min(const Fixed& fixed, const Fixed& fixed_2);
	static Fixed max(Fixed& fixed, Fixed& fixed_2);
	static Fixed max(const Fixed& fixed, const Fixed& fixed_2);

	Fixed operator++(int);
	Fixed& operator++();
	Fixed operator--(int);
	Fixed& operator--();

	int getRawBits( void ) const;
	
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _fixed_point;
	static const int _fractional = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif