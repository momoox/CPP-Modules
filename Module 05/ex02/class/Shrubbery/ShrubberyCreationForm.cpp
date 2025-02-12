/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:27:09 by mgeisler          #+#    #+#             */
/*   Updated: 2024/10/17 16:16:56 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137){
	this->_targetName = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs){
	*this = rhs;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	if (this != &rhs)
		this->_targetName = rhs._targetName;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSigned() == true)
	{
		std::cout << "Execution succeeded." << std::endl << std::endl;
		std::string Name = executor.getName() + "_shrubbery";
		std::ofstream outfile(Name.c_str());
		outfile << "               # #### #### " << std::endl;
    	outfile << "            ### __#|### |/#### " << std::endl;
        outfile << "           ##__#/ _||/##/_/##/_# " << std::endl;
        outfile << "         ###  __###|/ # # ### " << std::endl;
        outfile << "       ##___#___## | #/###_/_#### " << std::endl;
        outfile << "      ## #### #   #| /  #### ##/## " << std::endl;
        outfile << "       __#_--###`  |{,###---###-~ " << std::endl;
        outfile << "                   }{ " << std::endl;
        outfile << "                  }}{ " << std::endl;
        outfile << "                  }}{ " << std::endl;
        outfile << "                  {{} " << std::endl;
        outfile << "            , -=-~{ .-^- _ " << std::endl;
		outfile.close();
	}
	else
	{
		std::cout << this->_targetName << " couldn't be executed by " << executor.getName() << " because ";
		if (this->getGradeToExecute() < executor.getGrade())
			throw Bureaucrat::GradeTooLowException();
		else
			throw Bureaucrat::GradeTooHighException();
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}
