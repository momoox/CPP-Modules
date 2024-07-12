/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:50:07 by mgeisler          #+#    #+#             */
/*   Updated: 2024/07/12 19:27:53 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
// container deque ? et map?

int	main(int argc, char** argv) {

	PmergeMe merge;

	if(argc != 2)
		throw std::invalid_argument("Error: wrong argument. Enter a serie of value.\n");
	
	// try {
	// 	std::cout << merge.DequeStart(argv[1]) << std::endl;
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	try {
		std::cout << merge.MapStart(static_cast<std::string>(argv[1])) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}