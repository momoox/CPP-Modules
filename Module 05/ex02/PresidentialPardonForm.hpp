/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:22:15 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:15:42 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
public:
	PresidentialPardonForm(const Bureaucrat& rhs);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

	virtual void execute(Bureaucrat const & executor) const;
};

#endif