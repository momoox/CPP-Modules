/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:39:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/09 16:22:01 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradeToSign(1), _gradeToExecute(1){
}

Form::Form(std::string Name, const int GradeToSign, const int GradeToExecute) : _name(Name), _signed(0), _gradeToSign(GradeToSign), _gradeToExecute(GradeToExecute){	
}

Form::Form(const Form& rhs) : _name(getName()), _gradeToSign(getGradeToSign()), _gradeToExecute(getGradeToExecute()){
	*this = rhs;
}

std::string	Form::getName() const{
	return (this->_name);
}

bool Form::getSigned() const{
	return (this->_signed);
}

int	Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat& rhs){
	if (rhs.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
	{
		std::cout << this->getName() << " couldn't sign " << rhs.getName() << " because ";
		if (this->getGradeToSign() > rhs.getGrade())
			throw Bureaucrat::GradeTooLowException();
		else
			throw Bureaucrat::GradeTooHighException();
	}
}

Form& Form::operator=(const Form& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(){
}
