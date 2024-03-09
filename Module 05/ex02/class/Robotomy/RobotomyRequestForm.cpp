/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:55:37 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/09 15:53:49 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm ("RobotomyRequestForm", 72, 45){
	this->_targetName = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs){
	*this = rhs;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	if (this != &rhs)
		this->_targetName = rhs._targetName;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= this->getGradeToExecute() && this->getSigned() == true)
	{
		std::cout << "Execution succeeded." << std::endl;
		std::cout << "Drilling noises in the distance..." << std::endl;
		std::srand(std::time(0));
		if (std::rand() % 2)
			std::cout << executor.getName() << " has been robotomized successfully." << std::endl << std::endl;
		else
			std::cout << "Robotomy has failed on " << executor.getName() << "." << std::endl << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn't be executed by " << executor.getName() << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

RobotomyRequestForm::~RobotomyRequestForm(){
}