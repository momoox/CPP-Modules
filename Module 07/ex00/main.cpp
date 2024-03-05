/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:35:51 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/05 11:59:59 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(){
	int a = 5;
	int b = 8;
	double c = 3.6;
	double d = 1.3;

	std::cout << "Before swap " << a << ", " << b << std::endl;
	swap(a, b);
	std::cout << "After swap " << a << ", " << b << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << max(c, d) << std::endl;
}
