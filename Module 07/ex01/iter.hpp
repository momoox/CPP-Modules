/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:04:34 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/07 14:34:10 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, size_t length, void (*f)(T&)){
	for (size_t i = 0; i <= length; i++){
		f(array[i]);
	}
}

template<typename T>
void	print(T& a){
	std::cout << a << std::endl;
}

template<typename T>
size_t	length(T& array){
	size_t len = 0;

	for (size_t i = 0; array[i]; i++){
		len++;
	}
	return (len);
}

#endif