/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:26:49 by momox             #+#    #+#             */
/*   Updated: 2023/10/20 20:52:34 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory address of string is " << &string << std::endl;
	std::cout << "Memory address of held by stringPTR is " << &stringPTR << std::endl;
	std::cout << "Memory address of held by stringREF is " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of string is " << string << std::endl;
	std::cout << "The value held by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value held by stringREF is " << stringREF << std::endl;
	return (0);
}