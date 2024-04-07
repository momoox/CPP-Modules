/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:03:42 by mgeisler          #+#    #+#             */
/*   Updated: 2024/04/02 16:34:04 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	// === Array Class === //
	Array<int> numbers(5);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	const Array<int> numbers2(numbers);

	numbers[0] = 7;

	std::cout << "numbers2[0]: " << numbers2[0] << std::endl;
	std::cout << "numbers2[0]: " << numbers[0] << std::endl;
	std::cout << "numbers2[1]: " << numbers2[1] << std::endl;
	std::cout << "numbers2[2]: " << numbers2[2] << std::endl;
	std::cout << "numbers2[3]: " << numbers2[3] << std::endl;

	std::cout << "size of numbers: " << numbers.size() << std::endl;

	std::cout << std::endl;

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
	std::cout << std::endl << "numbers3 = numbers" << std::endl << std::endl;
	numbers3 = numbers;
	numbers[0] = 42;
	std::cout << "numbers3[0]: " << numbers3[0] << std::endl;
	std::cout << "numbers3[1]: " << numbers3[1] << std::endl;
	std::cout << "numbers3[2]: " << numbers3[2] << std::endl;
	std::cout << "numbers3[3]: " << numbers3[3] << std::endl;

	std::cout << std::endl;
	
	// === std arr === //

	const int test = 0;
	std::cout << "test: " << test << std::endl;

	// === Does not compile === //
	// test = 5;
	// number2[0] = 42;
	
	return (0);
}