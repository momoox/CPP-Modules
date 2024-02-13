/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:08:41 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/13 21:29:04 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <Bureaucrat.hpp>

class AForm{
private:
	const std::string 		_name;
	bool					_signed;
	const int				_grade_to_sign;
	const int				_grade_to_execute;
public:
	AForm();
	AForm(std::string Name, bool Signed, const int Grade_to_sign, const int Grade_to_execute);
	AForm(const AForm& rhs);
	virtual ~AForm();

	AForm& operator = (const AForm& rhs);

	std::string getName(void) const;
	virtual void		setSign(bool sign);
	bool		getSign(void) const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	virtual void execute(Bureaucrat const & executor) = 0;
};

#endif