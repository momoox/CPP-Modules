/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interns.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:13:53 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:50:56 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERS_HPP
# define INTERS_HPP

# include "../Bureaucrat/Bureaucrat.hpp"
# include "../Form/Form.hpp"
# include "../Robotomy/RobotomyRequestForm.hpp"
# include "../Presidential/PresidentialPardonForm.hpp"
# include "../Shrubbery/ShrubberyCreationForm.hpp"

class Interns{
private:
	Form *forms[3];
public:
	Interns();
	Interns(const Interns &rhs);
	~Interns();

	Interns& operator = (const Interns& rhs);
	Form *makeForm(std::string formName, std::string targetName);

	class NotFound : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Form NotFound\n");
		}
	};
};

#endif