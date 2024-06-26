/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:15:15 by mgeisler          #+#    #+#             */
/*   Updated: 2024/06/26 17:12:22 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
// container stack ?
// push values and pop 2 when ope (checker si y'a bien une valeur)
// push back in result and continue


//check les signes, check si que chiffres
//valeurs inferieurs a 10 (pas les resultats)
// gerer + - / *


int main(int argc, char** argv) {
	(void) argc;
	
	try {
		RPN test(argv[1]);
		test.RPNresult();
	}
	catch (const RPN::Args &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}