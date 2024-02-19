/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:08:41 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/16 17:54:33 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "../Bureaucrat/Bureaucrat.hpp"
class Bureaucrat;

class Form{
private:
	const std::string 		_name;
	bool					_signed;
	const int				_gradeToSign;
	const int				_gradeToExecute;
public:
	Form();
	Form(std::string Name, const int Grade_to_sign, const int Grade_to_execute);
	Form(const Form& rhs);
	virtual ~Form();

	Form& operator = (const Form& rhs);

	std::string getName(void) const;
	bool		getSign(void) const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(const Bureaucrat& rhs);

	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual Form *create(std::string target) = 0;
};

#endif