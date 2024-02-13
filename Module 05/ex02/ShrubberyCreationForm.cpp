/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:27:09 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:43:09 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const Bureaucrat& rhs){
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs){
	*this = rhs;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	if (this != &rhs)
		// this->_grade = rhs._grade;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= 137)
	{
		// AForm::setSign(true); c caca ca
		std::string Name = executor.getName() + "_shrubbery";
		std::ofstream MyFile(Name);
		MyFile << "ASCII TREES JSP CE QUE C'EST";
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}
