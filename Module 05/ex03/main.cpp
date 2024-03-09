/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:40:42 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/09 16:45:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/Form/Form.hpp"
#include "class/Interns/Interns.hpp"
#include "class/Shrubbery/ShrubberyCreationForm.hpp"
#include "class/Robotomy/RobotomyRequestForm.hpp"
#include "class/Presidential/PresidentialPardonForm.hpp"

int	main(){
	 Interns intern;

    try{
        Form *SCF = intern.makeForm("ShrubberyCreationForm", "home");
        Bureaucrat b1("Elias", 136);

		SCF->beSigned(b1);
		b1.signForm(*SCF);
        b1.executeForm(*SCF);
		
        delete SCF;
    }
	catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
	try{
		Form *SCF = intern.makeForm("ShrubberyCreationForm", "home");
		Bureaucrat b2("Manny", 145);

		SCF->beSigned(b2);
		b2.signForm(*SCF);
        b2.executeForm(*SCF);

		delete SCF;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
    
    try{
        Form *SCF = intern.makeForm("RobotomyRequestForm", "home");
        Bureaucrat b1("Romain", 44);

		SCF->beSigned(b1);
        b1.signForm(*SCF);
        b1.executeForm(*SCF);

        delete SCF;
    }

    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

	try{
		Form *SCF = intern.makeForm("RobotomyRequestForm", "home");
		Bureaucrat b2("Richard", 72);

		SCF->beSigned(b2);
		b2.signForm(*SCF);
		b2.executeForm(*SCF);

		delete SCF;
	}

	catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

    try{
        Form *SCF = intern.makeForm("PresidentialPardonForm", "home");
        Bureaucrat b1("Joachim", 5);

		SCF->beSigned(b1);
        b1.signForm(*SCF);
        b1.executeForm(*SCF);

        delete SCF;
    }

    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

	try{
		Form *SCF = intern.makeForm("PresidentialPardonForm", "home");
		Bureaucrat b2("Salah", 24);

		SCF->beSigned(b2);
		b2.signForm(*SCF);
		b2.executeForm(*SCF);

		delete SCF;
	}

	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

    try{
        Form *SCF = intern.makeForm("None Existing Form", "home");
        Bureaucrat b1("Test", 5);
        
		SCF->beSigned(b1);
        b1.signForm(*SCF);
        b1.executeForm(*SCF);

        delete SCF;
    }

    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}