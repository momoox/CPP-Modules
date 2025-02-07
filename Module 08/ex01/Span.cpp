/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:38:27 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 15:47:11 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N){
	this->_Size = N;
}

Span::~Span(){
}

Span::Span(const Span &src){
	*this = src;
}

Span& Span::operator=(const Span &rhs){
	if(this != &rhs)
		this->_Vec = rhs._Vec;

	return(*this);
}

void Span::addNumber(int value){
	if(this->_Vec.size() < this->_Size) {
		this->_Vec.push_back(value);
		// std::cout << value << std::endl;
	}
	else
		throw std::exception();
}

void	Span::rangeIterator(){
	std::srand(time(0));

	for(std::vector<unsigned int>::iterator it = this->_Vec.begin(); it != this->_Vec.end() || this->_Vec.begin() == this->_Vec.end(); ++it)
		addNumber(std::rand() % 10);
}

unsigned int Span::shortestSpan(){
	if(this->_Size <= 1 || this->_Vec.size() <= 1)
		throw std::exception();

	std::vector<unsigned int> Vec;
	unsigned int result = UINT_MAX;

	std::copy(this->_Vec.begin(), this->_Vec.end(), std::back_inserter(Vec));
	std::sort(Vec.begin(), Vec.end());

	for(std::vector<unsigned int>::iterator it = Vec.begin(), ti = Vec.begin() + 1; it != Vec.end() && ti != Vec.end(); ++it, ++ti)
		if(*ti - *it < result)
			result = *ti - *it;

	return (result);
}

unsigned int Span::longestSpan(){
	if(this->_Size <= 1 || this->_Vec.size() <= 1)
		throw std::exception();

	unsigned int result = *(std::max_element(this->_Vec.begin(), this->_Vec.end())) - *(std::min_element(this->_Vec.begin(), this->_Vec.end()));

	return (result);
}
