/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:03:05 by mgeisler          #+#    #+#             */
/*   Updated: 2024/03/07 14:39:16 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) 
{
    int array[] = {1, 2, 3, 4, 5};

    ::iter(array, 5, print);

    const int array2[] = {1, 2, 3, 4, 5};

    ::iter(array2, 5, print);

    std::string strings[] = {"s1", "s2", "s3"};

    ::iter(strings, 3, print);
}
