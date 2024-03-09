/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:40:42 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/09 15:45:21 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/AForm/AForm.hpp"
#include "class/Shrubbery/ShrubberyCreationForm.hpp"
#include "class/Robotomy/RobotomyRequestForm.hpp"
#include "class/Presidential/PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat b1("Jacques", 1);
	Bureaucrat b2("Steve", 34);
	Bureaucrat b3("Karine", 52);

	AForm *f1 = new ShrubberyCreationForm("Shrubbery");
	AForm *f2 = new RobotomyRequestForm("Robotomy");
	AForm *f3 = new PresidentialPardonForm("Presidential");

	std::cout << b1.getName() << " grade is "<< b1.getGrade() << std::endl;
	std::cout << b2.getName() << " grade is "<< b2.getGrade() << std::endl;
	std::cout << b3.getName() << " grade is "<< b3.getGrade() << std::endl << std::endl;

	try{
		f1->beSigned(b1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		f2->beSigned(b2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		f3->beSigned(b3);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b1.signForm(*f1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b2.signForm(*f2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b3.signForm(*f3);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b1.executeForm(*f1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b2.executeForm(*f2);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		b3.executeForm(*f3);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	delete f1;
	delete f2;
	delete f3;
}