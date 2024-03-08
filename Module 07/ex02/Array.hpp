/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:45:20 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/07 15:47:08 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
private:
public:
	Array();
	Array(unsigned int n);
	Array(const Array &src);
	virtual ~Array();
	Array &operator = (const Array &rhs);
};

#endif // ARRAY_HPP
