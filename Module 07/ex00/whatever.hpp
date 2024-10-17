/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:36:07 by mgeisler          #+#    #+#             */
/*   Updated: 2024/10/16 16:32:17 by mgeisler         ###   ########.fr       */
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
T const &max(T const &a, T const &b){
	if (a > b)
		return (a);
	else
		return (b);
}

template<typename T>
T const &min(T const &a, T const &b){
	if (a < b)
		return (a);
	else
		return (b);
}

#endif