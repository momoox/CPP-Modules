/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:31:42 by mgeisler          #+#    #+#             */
/*   Updated: 2025/04/25 17:20:25 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main()
{
	std::vector<int> vec;
	std::set<int> set;
	std::list<int> list;

	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(6);

	set.insert(3);
	set.insert(5);
	set.insert(1);
	set.insert(7);

	list.push_back(6);
	list.push_back(8);

	try {
		std::cout << "Vector returns: " << *(easyfind(vec, 5)) << std::endl;
		std::cout << "Set returns: " << *(easyfind(set, 3)) << std::endl;
		std::cout << "List returns: " << *(easyfind(list, 9)) << std::endl;
	}

	catch (std::exception &e) {
		std::cout << "no occurences found." << std::endl;
	}
	return (0);
}
