/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:55:37 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:15:37 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const Bureaucrat& rhs){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs){
	*this = rhs;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	if (this != &rhs)
		// this->_grade = rhs._grade;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() <= 45)
	{
		static int odds = 100;	

		std::cout << "Drilling noises in the distance..." << std::endl;
		if (odds >= 0)
		{
			if (odds % 2)
				std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
			else
				std::cout << "Robotomy has failed on " << executor.getName() << "." << std::endl;
		}
		else
			std::cout << "An error occured, relaunch the program." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
}