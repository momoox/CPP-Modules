/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:22:15 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/19 14:33:14 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include "../Form/Form.hpp"

class PresidentialPardonForm : public Form{
private:
	std::string _targetName;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

	virtual void	execute(Bureaucrat const & executor) const;
	Form* create(std::string target);
};

#endif