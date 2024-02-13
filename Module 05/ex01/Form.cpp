/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:04:08 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 19:37:36 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string Name, bool Signed, const int Grade_to_sign, const int Grade_to_execute) : _name(Name), _signed(Signed), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute){	
}

Form::Form(const Form& rhs) : _name(getName()), _grade_to_sign(getGradeToSign()), _grade_to_execute(getGradeToExecute()){
	*this = rhs;
}

std::string	Form::getName() const{
	return (this->_name);
}

bool Form::getSigned() const{
	return (this->_signed);
}

int	Form::getGradeToSign() const{
	return (this->_grade_to_sign);
}

int	Form::getGradeToExecute() const{
	return (this->_grade_to_execute);
}

void	Form::beSigned(const Bureaucrat& rhs){
	if (rhs.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::signForm(const Form& rhs){
	if (rhs.getSigned() == true)
		std::cout << this->getName() << "signed" << rhs.getName() << std::endl;
	else
		std::cout << this->getName() << "couldn't sign" << rhs.getName() << std::endl;
		throw Form::GradeTooLowException();
}

Form& Form::operator=(const Form& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &rhs){
	out << "📄" << rhs.getName() << ":" << std::endl;
	out << "Status: " << rhs.getSigned() << std::endl;
	out << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
	return (out);
}

Form::~Form(){
}

