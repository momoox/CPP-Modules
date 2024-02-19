/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:27:09 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:38:31 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	this->_targetName = "Null";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137){
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
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
	{
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
		std::cout << this->getName() << " couldn't be executed by " << executor.getName() << std::endl << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}

Form* ShrubberyCreationForm::create(std::string target){
	return (new ShrubberyCreationForm(target));
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}
