/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interns.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:16:49 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:58:15 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interns.hpp"

Interns::Interns(){
	this->forms[0] = new RobotomyRequestForm();
	this->forms[2] = new ShrubberyCreationForm();
	this->forms[1] = new PresidentialPardonForm();
}

Interns::Interns(const Interns &rhs){
	this->forms[0] = new RobotomyRequestForm();
	this->forms[2] = new ShrubberyCreationForm();
	this->forms[1] = new PresidentialPardonForm();
	*this = rhs;
}

Interns& Interns::operator=(const Interns &rhs){
	if (this != &rhs)
		*this = rhs;
	return (*this);
}


Form* Interns::makeForm(std::string nameForm, std::string targetName)
{
	std::string form_check[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
		if (nameForm.compare(form_check[i]) == 0)
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return (forms[i]->create(targetName));
		}
	std::cout << nameForm << " doesn't exist. This form couldn't be created." << std::endl;
	throw Interns::NotFound();
	
	return (NULL);
}

Interns::~Interns(){
	delete forms[0];
	delete forms[1];
	delete forms[2];
}
