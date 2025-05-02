/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:11 by mgeisler          #+#    #+#             */
/*   Updated: 2025/04/25 18:07:22 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top of mutant stack: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Top of mutant stack after pop: " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	// ++it;
	// --it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "Size of mutant stack: " << mstack.size() << std::endl << std::endl;

	std::cout << "---TEST LIST---\n" << std::endl;


	std::list<int> s;

	s.push_back(5);
	s.push_back(3);
	s.push_back(5);
	s.push_back(737);
	s.push_back(0);

	std::list<int>::iterator te = s.begin();
	std::list<int>::iterator st = s.end();

	// ++te;
	// --te;

	while (te != st)
	{
		std::cout << *te << std::endl;
		++te;
	}

	std::cout << "Size of list: " << s.size() << std::endl;
	
	return 0;
}