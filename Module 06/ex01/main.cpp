/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:51:02 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/27 18:30:12 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data/dataStruct.hpp"
#include "class/serializer.hpp"

int	main(){
	Data data;

	data.age = 24;
	data.name = "Steve";

	std::cout << "Before serialiation: " << data.age << ", " << data.name << std::endl;

	uintptr_t encode = Serializer::serialize(&data);
	Data *result = Serializer::deserialize(encode);

	std::cout << "After serialisation: " << result->age << ", " << result->name << std::endl;

	return (0);
}