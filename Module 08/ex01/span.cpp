/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:38:27 by mgeisler          #+#    #+#             */
/*   Updated: 2024/04/17 12:46:23 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(unsigned int N){
	this->_store = new int[N];
	this->_ssize = N;
}

span::~span(){
	if (this->_store)
		delete[] this->_store;
}

void span::addNumber(int value){
}