/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:48:18 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 19:39:53 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//regarder la vidéo, il faut surement le truc pour gérer plusieurs exceptions
int	main(){

	Bureaucrat b1("Steve", 1);
	Bureaucrat b2("Béatrice", 150);
	Form f1("Formulaire de la machine à café", false, 45, 15);
	Form f2("Formulaire de droit à l'image", false, 13, 2);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	try{
		f1.beSigned(b1);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	try{
		f2.beSigned(b2);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	try{
		b1.signForm(f1);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}
	try{
		b2.signForm(f2);
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	return (0);
}