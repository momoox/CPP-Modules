/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:40:42 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:51:37 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Bureaucrat/Bureaucrat.hpp"
#include "class/Form/Form.hpp"
#include "class/Interns/Interns.hpp"
#include "class/Shrubbery/ShrubberyCreationForm.hpp"
#include "class/Robotomy/RobotomyRequestForm.hpp"
#include "class/Presidential/PresidentialPardonForm.hpp"

int	main()
{
	 Interns intern;

    try 
	{
        Form *SCF = intern.makeForm("ShrubberyCreationForm", "home");
        Bureaucrat b1("Bob", 136);
        Bureaucrat b2("Jhon", 145);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    
	catch (std::exception & e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try 
	{
        Form *SCF = intern.makeForm("RobotomyRequestForm", "home");
        Bureaucrat b1("Bob2", 44);
        Bureaucrat b2("Jhon2", 72);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }

    catch (std::exception & e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
	{
        Form *SCF = intern.makeForm("PresidentialPardonForm", "home");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }

    catch (std::exception & e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try 
	{
        Form *SCF = intern.makeForm("None Existing Form", "home");
        Bureaucrat b1("Bob2", 5);
        Bureaucrat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }

    catch (std::exception & e) 
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }
}