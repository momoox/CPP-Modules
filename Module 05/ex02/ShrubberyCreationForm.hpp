/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:19:18 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:36:46 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
public:
	ShrubberyCreationForm(const Bureaucrat& rhs);
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);

	virtual void	execute(Bureaucrat const & executor) const;
	// virtual void	setSign(bool sign);
};

#endif