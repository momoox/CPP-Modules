/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:21:11 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:15:50 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm{
public:
	RobotomyRequestForm(const Bureaucrat& rhs);
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

	virtual void execute(Bureaucrat const & executor) const;
};

#endif