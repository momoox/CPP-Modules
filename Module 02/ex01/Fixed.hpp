/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:43 by momox             #+#    #+#             */
/*   Updated: 2023/11/28 14:35:39 by momox            ###   ########.fr       */
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

	Fixed& operator=(const Fixed &fixed);
	int getRawBits( void ) const;
	
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _fixed_point;
	static const int _fractional = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);
double	myPow(double base, int exponent);

#endif