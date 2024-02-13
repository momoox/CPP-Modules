/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:06 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:19:48 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
protected:
	const std::string 	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string Name, int grade);
	Bureaucrat(const Bureaucrat& bur);
	~Bureaucrat(void);
	Bureaucrat& operator = (const Bureaucrat& rhs);
	Bureaucrat& operator << (const Bureaucrat& rhs);

	std::string 	getName() const;
	int				getGrade() const;
	void			decgrade();
	void			incgrade();
	void 			executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("\n");
		}
	};
};

#endif