/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:03:42 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 14:22:51 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	// === Array Class === //
	std::cout << "numbers creation..." << std::endl << std::endl;

	Array<int> numbers(5);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	std::cout << "numbers[0]" << numbers[0] << std::endl;
	std::cout << "numbers[1]" << numbers[1] << std::endl;
	std::cout << "numbers[2]" << numbers[2] << std::endl;
	std::cout << "numbers[3]" << numbers[3] << std::endl;
	std::cout << "numbers[4]" << numbers[4] << std::endl;

	std::cout << "size of numbers: " << numbers.size() << std::endl << std::endl;

	std::cout << "numbers2 creation..." << std::endl << std::endl;

	const Array<int> numbers2 = numbers;

	numbers[0] = 7;
	std::cout << "numbers[0] changed to 7. numbers2 is a copy of numbers before recent changes." << std::endl << std::endl;

	std::cout << "--> numbers[0]: " << numbers[0] << std::endl;
	std::cout << "numbers2[0]: " << numbers2[0] << std::endl;
	std::cout << "numbers2[1]: " << numbers2[1] << std::endl;
	std::cout << "numbers2[2]: " << numbers2[2] << std::endl;
	std::cout << "numbers2[3]: " << numbers2[3] << std::endl;
	std::cout << "numbers2[4]: " << numbers2[4] << std::endl;

	std::cout << "size of numbers2: " << numbers.size() << std::endl;

	std::cout << std::endl;


	std::cout << "numbers3 creation..." << std::endl << std::endl;

	Array<int> numbers3(5);

	numbers3[0] = 6;
	numbers3[1] = 7;
	numbers3[2] = 8;
	numbers3[3] = 9;
	numbers3[4] = 10;

	std::cout << "numbers3[0]: " << numbers3[0] << std::endl;
	std::cout << "numbers3[1]: " << numbers3[1] << std::endl;
	std::cout << "numbers3[2]: " << numbers3[2] << std::endl;
	std::cout << "numbers3[3]: " << numbers3[3] << std::endl;
	std::cout << "numbers3[4]: " << numbers3[4] << std::endl;

	std::cout << "size of numbers3: " << numbers.size() << std::endl << std::endl;

	std::cout << std::endl << "numbers3 changed to be a copy of numbers." << std::endl << std::endl;

	numbers3 = numbers;

	std::cout << "numbers3[0]: " << numbers3[0] << std::endl;
	std::cout << "numbers3[1]: " << numbers3[1] << std::endl;
	std::cout << "numbers3[2]: " << numbers3[2] << std::endl;
	std::cout << "numbers3[3]: " << numbers3[3] << std::endl;
	std::cout << "numbers3[4]: " << numbers3[4] << std::endl;

	std::cout << "size of numbers3: " << numbers.size() << std::endl;


	std::cout << std::endl;
	std::cout << "Try/catch out of memory numbers3:" << std::endl;
	try {
		std::cout << numbers3[5] << std::endl;
	}

	catch(const std::exception &e) {
		std::cout << "Error." << std::endl;
	}
	
	
	return (0);
}