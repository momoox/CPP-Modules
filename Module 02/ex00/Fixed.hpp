/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:39:32 by momox             #+#    #+#             */
/*   Updated: 2023/10/25 18:16:33 by momox            ###   ########.fr       */
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
	~Fixed(void);

	Fixed& operator = (const Fixed& fixed);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int _fixed_point;
	static const int _stack = 8;
};

#endif