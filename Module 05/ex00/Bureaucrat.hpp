/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:06 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/12 19:08:36 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	const std::string 	_name;
	int					_grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string Name, int grade);
	Bureaucrat(const Bureaucrat& bur);
	~Bureaucrat(void);
	Bureaucrat& operator = (const Bureaucrat& rhs);
	Bureaucrat& operator << (const Bureaucrat& rhs);

	void			setName(std::string Name);
	void			setGrade(int Grade);
	std::string 	getName() const;
	int				getGrade() const;
	void			decgrade();
	void			incgrade();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too high !\n");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too low !\n");
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif