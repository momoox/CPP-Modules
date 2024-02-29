/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:06:32 by mgeisler          #+#    #+#             */
/*   Updated: 2024/02/27 18:35:47 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "../data/dataStruct.hpp"

class Serializer{
private:
	Serializer();
public:
	Serializer(const Serializer &src);
	virtual ~Serializer();
	Serializer &operator = (const Serializer &rhs);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	
};

#endif