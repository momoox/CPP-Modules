/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:21:11 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:33:06 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include "../Form/Form.hpp"

class RobotomyRequestForm : public Form{
private:
	std::string _targetName;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);

	virtual void	execute(Bureaucrat const & executor) const;
	Form* create(std::string target);
};

#endif