/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:04:34 by mgeisler          #+#    #+#             */
/*   Updated: 2024/10/17 17:10:27 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	print(T& a){
	std::cout << a << " ";
}

template<typename T, typename F>
void	iter(T *array, size_t length, F func){
	for (size_t i = 0; i < length; i++){
		func(array[i]);
	}
	std::cout << std::endl;
}


#endif