/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:50:07 by mgeisler          #+#    #+#             */
/*   Updated: 2024/07/19 10:52:11 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv) {

	int	i = 1;
	PmergeMe merge;
	std::chrono::time_point<std::chrono::system_clock> startDeque, endDeque;
	std::chrono::time_point<std::chrono::system_clock> startMap, endMap;

	if(argc == 1)
		throw std::invalid_argument("Error: wrong argument. Enter a serie of value.\n");
	
	startDeque = std::chrono::system_clock::now();
	try {
		while(i < argc)
			merge.DequeCreation(argv[i++]);
		merge.DequeStart();
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return(1);
	}
	endDeque = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = endDeque - startDeque;
	std::cout << std::fixed << std::setprecision(5) << elapsed_seconds.count() << "s" << std::endl;

	i = 1;
	startMap = std::chrono::system_clock::now();
	try {
		while(i < argc)
			merge.MapCreation(static_cast<std::string>(argv[i++]));
		merge.MapStart();
	}
	catch (std::exception& e) {
		std::cout << e.what();
		return(1);
	}

	endMap = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_secondsMap = endMap - startMap;
	std::cout << std::fixed << std::setprecision(5) << elapsed_secondsMap.count() << "s" << std::endl;

}

// `shuf -i 1-100000 -n 3000 | tr "\n" " "` à gérer