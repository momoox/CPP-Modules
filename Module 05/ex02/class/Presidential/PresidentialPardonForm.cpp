/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:01:17 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/16 17:50:13 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5){
	this->_targetName = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs){
	*this = rhs;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if (this != &rhs)
		this->_targetName = rhs._targetName;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSign() == true)
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
	{
		std::cout << this->getName() << " couldn't be executed by " << executor.getName() << std::endl << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}

PresidentialPardonForm::~PresidentialPardonForm(){
}