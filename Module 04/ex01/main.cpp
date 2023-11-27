/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:43:21 by momox             #+#    #+#             */
/*   Updated: 2023/11/27 20:19:08 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *animals[2];

	for (int i = 0; i < 2; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	std::cout << std::endl;

	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	std::cout << std::endl << std::endl;

	Cat *cat = new Cat;
	Cat catcpy(*cat);

	std::cout << std::endl;

	delete cat;
}
