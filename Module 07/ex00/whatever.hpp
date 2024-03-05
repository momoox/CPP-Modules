/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:36:07 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/05 11:59:45 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T& a, T& b){
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T	max(const T& a, const T& b){
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	return (b);
}

template<typename T>
T	min(const T& a, const T& b){
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	return (b);
}

#endif