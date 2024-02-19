/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:39:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 15:00:58 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _gradeToSign(1), _gradeToExecute(1){
}

AForm::AForm(std::string Name, const int GradeToSign, const int GradeToExecute) : _name(Name), _signed(0), _gradeToSign(GradeToSign), _gradeToExecute(GradeToExecute){	
}

AForm::AForm(const AForm& rhs) : _name(getName()), _gradeToSign(getGradeToSign()), _gradeToExecute(getGradeToExecute()){
	*this = rhs;
}

std::string	AForm::getName() const{
	return (this->_name);
}

bool AForm::getSign() const{
	return (this->_signed);
}

int	AForm::getGradeToSign() const{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat& rhs){
	if (rhs.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
	{
		std::cout << this->getName() << " couldn't be signed by " << rhs.getName() << std::endl << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}

AForm& AForm::operator=(const AForm& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

AForm::~AForm(){
}
