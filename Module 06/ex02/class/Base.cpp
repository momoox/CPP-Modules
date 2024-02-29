/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:41:19 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/28 19:20:16 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// ! Including the typeinfo header is forbidden.

Base::Base() {}

Base::~Base() {}

Base* Base::generate(void){
	srand(3);

	int value = rand();
	Base* inst;

	switch(value){
		case 1:
			inst = new A;
			break;
		case 2:
			inst = new B;
			break;
		case 3:
			inst = new C;
			break;
	}

	return(inst);
}

void Base::identify(Base* p){
	// It prints the actual type of the object pointed to by p: "A", "B" or "C".
	// jsp encore comment faire
}

void Base::identify(Base& p){
	// It prints the actual type of the object pointed to by p: "A", "B" or "C".
	// Using a pointer inside this function is forbidden.
}

//use dynamic_cast
