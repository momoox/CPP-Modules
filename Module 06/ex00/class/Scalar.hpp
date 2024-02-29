/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:30:21 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/25 14:08:58 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#	include <iostream>
#	include <string>
#	include <cstdlib>
#	include <climits>

class Scalar {
private:
	Scalar();
public:
	Scalar(const Scalar &src);
	virtual ~Scalar();
	Scalar &operator = (const Scalar &rhs);
	static void convert(const std::string &input);
};

int stringToInteger(const std::string& str);
float stringToFloat(const std::string &str);

int	isInt(const std::string& input);
int	isFloat(const std::string& input);
int	isDouble(const std::string& input);
int	isChar(const std::string& input);

void	convertInt(const std::string& input);
void	convertFloat(const std::string& input);
void	convertDouble(const std::string& input);
void	convertChar(const std::string& input);
void	exceptions(const std::string& input);

#endif
