/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:33:57 by mgeisler          #+#    #+#             */
/*   Updated: 2024/05/03 20:45:15 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(){

	Span sp = Span(10000);

	// try{
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// }
	// catch (std::exception &e){
	// 	std::cout << "Error occured: too manny numbers added." << std::endl;	
	// }

	try{
		sp.rangeIterator();
	}
	catch (std::exception &e){
		std::cout << "Error occured: too manny numbers added." << std::endl;
	}
	
	try{
		std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Error occured: container too small." << std::endl;
	}

	try{
		std::cout << "Longest span is: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Error occured: container too small." << std::endl;
	}
	
	return (0);
}