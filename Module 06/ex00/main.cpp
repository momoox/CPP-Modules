/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:25:39 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/25 13:34:53 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Scalar.hpp"

int	main(int argc, char **argv){
	if (argc != 2) {
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	std::string input = (std::string)argv[1];
	Scalar::convert(input);
	return (0);
}