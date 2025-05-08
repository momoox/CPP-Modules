/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:50:07 by mgeisler          #+#    #+#             */
/*   Updated: 2025/05/08 16:57:07 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv) {

	int	i = 1;
	PmergeMe merge;
	// clock_t startDeque, endDeque;
	clock_t startList, endList;
	//je crois que je vais utiliser list plutot

	if(argc == 1) {
		std::cout << "Wrong number of arguments. Please type some values." << std::endl;
		exit(1);
	}
	
	// startDeque = clock();
	// try {
	// 	while(i < argc)
	// 		merge.DequeCreation(argv[i++]);
	// 	merge.DequeStart();
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what();
	// 	return(1);
	// }
	// endDeque = clock();
	// double elapsed_seconds_deque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC;
	// std::cout << std::fixed << std::setprecision(5) << elapsed_seconds_deque << "s" << std::endl;

	// return 0;
	
	// i = 1;
	startList = clock();
	try {
		while(i < argc)
			merge.ListCreation(static_cast<std::string>(argv[i++]));
		merge.ListStart();
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return(1);
	}

	endList = clock();
	double elapsed_seconds_map = static_cast<double>(endList - startList) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(5) << elapsed_seconds_map << "s" << std::endl;

	return (0);
}