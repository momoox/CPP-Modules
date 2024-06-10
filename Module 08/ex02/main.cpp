/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:40:11 by mgeisler          #+#    #+#             */
/*   Updated: 2024/06/10 16:42:38 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	printf("---TEST VECTOR---\n");

	std::vector<int> s;

	s.push_back(5);
	s.push_back(3);
	s.push_back(5);
	s.push_back(737);
	s.push_back(0);

	std::vector<int>::iterator te = s.begin();
	std::vector<int>::iterator st = s.end();

	++te;
	--te;

	while (te != st)
	{
		std::cout << *te << std::endl;
		++te;
	}
	
	return 0;
}