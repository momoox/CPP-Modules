/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:52:12 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	return ;
}

Bureaucrat::Bureaucrat(std::string Name, int grade) : _name(Name){
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bur) : _name(bur._name){
	*this = bur;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

void	Bureaucrat::signForm(const Form &rhs){
	if (rhs.getSign() == true)
		std::cout << this->getName() << " signed " << rhs.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << rhs.getName() << std::endl;
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::incgrade(){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::decgrade(){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::executeForm(Form const &form){
	std::cout << form.getName() << " is executed by " << this->getName() << std::endl << std::endl;
	form.execute(*this);
}

Bureaucrat::~Bureaucrat(){

}