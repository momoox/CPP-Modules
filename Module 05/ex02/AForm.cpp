/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:39:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:36:29 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string Name, bool Signed, const int Grade_to_sign, const int Grade_to_execute) : _name(Name), _signed(Signed), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute){	
}

AForm::AForm(const AForm& rhs) : _name(getName()), _grade_to_sign(getGradeToSign()), _grade_to_execute(getGradeToExecute()){
	*this = rhs;
}

std::string	AForm::getName() const{
	return (this->_name);
}

void	AForm::setSign(bool sign){
	this->_signed = sign;
}

bool AForm::getSign() const{
	return (this->_signed);
}

int	AForm::getGradeToSign() const{
	return (this->_grade_to_sign);
}

int	AForm::getGradeToExecute() const{
	return (this->_grade_to_execute);
}

AForm& AForm::operator=(const AForm& rhs){
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

// std::ostream &operator<<(std::ostream &out, const AForm &rhs){
// 	out << "📄" << rhs.getName() << ":" << std::endl;
// 	out << "Status: " << rhs.getSigned() << std::endl;
// 	out << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
// 	out << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
// 	return (out);
// }

AForm::~AForm(){
}




// AForm::AForm(std::string Name, bool Signed, const int Grade_to_sign, const int Grade_to_execute) _name(Name), _signed(false), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute){
// }

// AForm::AForm(const AForm &rhs) _name(getName()), _grade_to_sign(getGradeToSign()), _grade_to_execute(getGradeToExecute()){
// 	*this = rhs;
// }

// std::string AForm::getName(void) const{
// 	return (this->_name);
// }

// AForm& AForm::operator=(const AForm& rhs){
// 	if (this != &rhs)
// 		//
// 	return (*this);
// }

// AForm::~AForm(){
// }