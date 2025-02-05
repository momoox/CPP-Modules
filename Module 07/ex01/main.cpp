/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:03:05 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 14:11:23 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) 
{
    int array[] = {1, 2, 3, 4, 5};

    std::cout << "Array print: " << std::endl;

    iter(array, 5, print<int>);

    const int array2[] = {1, 2, 3, 4, 5};

    std::cout << "Const array print: " << std::endl;

    iter(array2, 5, print<const int>);

    std::string strings[] = {"s1", "s2", "s3"};

    std::cout << "String print: " << std::endl;

    iter(strings, 3, print<std::string>);
}
