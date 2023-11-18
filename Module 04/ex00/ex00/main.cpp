/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:11:03 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 19:37:17 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();

	std::cout << "Type is " << j->getType() << " " << std::endl;
	std::cout << "Type is " << i->getType() << " " << std::endl;
	std::cout << i->getType() << "'s ";
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << "'s ";
	j->makeSound();
	std::cout << "meta does ";
	meta->makeSound();
	std::cout << "wrong does ";
	wrong->makeSound();

	return (0);
}