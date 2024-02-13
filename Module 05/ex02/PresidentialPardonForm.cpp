/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:01:17 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:15:45 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const Bureaucrat& rhs){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs){
	*this = rhs;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if (this != &rhs)
		// this->_grade = rhs._grade;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= 5)
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw Bureaucrat::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm(){
}