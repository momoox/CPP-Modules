/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:19:58 by mgeisler         ###   ########.fr       */
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

void	Bureaucrat::executeForm(AForm const & form){
	
}

Bureaucrat::~Bureaucrat(){

}