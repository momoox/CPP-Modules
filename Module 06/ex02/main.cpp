/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:29:01 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/04 17:52:24 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Base.hpp"
// #include "class/A.hpp"
// #include "class/B.hpp"
// #include "class/C.hpp"

int	main(){

	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);

	delete (ptr);
}