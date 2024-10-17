/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:04:34 by mgeisler          #+#    #+#             */
/*   Updated: 2024/10/16 17:06:54 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, size_t length, ){
	for (size_t i = 0; i <= length; i++){
		print(array[i]);
	}
}

template<typename T>
void	print(T& a){
	std::cout << a << std::endl;
}

#endif