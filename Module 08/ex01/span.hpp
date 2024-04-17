/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:34:08 by mgeisler          #+#    #+#             */
/*   Updated: 2024/04/17 12:42:42 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class span {
private:
	int			 *_store;
	unsigned int _ssize;

public:
	span(unsigned int N);
	~span();
	span(const span &src);
	span &operator = (const span &rhs);

	void addNumber(int value);
};

#endif