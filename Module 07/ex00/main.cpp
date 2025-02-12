/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:35:51 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 14:01:09 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(){
	int a = 5;
	int b = 8;

	double c = 3.6;
	double d = 1.3;

	std::cout << "Before swap, a = " << a << " and b = " << b << std::endl;

	swap(a, b);

	std::cout << "After swap, a = " << a << " and b = " << b << std::endl;
	
	std::cout << std::endl;

	std::cout << "Double c and d created. c = " << c << " and d = " << d << std::endl;
	
	std::cout << "Minimum between c and d is " << min<double>(c, d) << std::endl;
	std::cout << "Maximum between c and d is " << max(c, d) << std::endl;
}


// int main( void ) {

// 	int a = 2;
// 	int b = 3;

// 	::swap( a, b );

// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


// 	std::string c = "chaine1";
// 	std::string d = "chaine2";

// 	::swap(c, d);

// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// 	return (0);
// }