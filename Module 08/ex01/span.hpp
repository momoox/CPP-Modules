/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:34:08 by mgeisler          #+#    #+#             */
/*   Updated: 2024/05/03 19:29:29 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <time.h>

class Span {
private:
	std::vector<unsigned int> _Vec;
	unsigned int	_Size;

public:
	Span(unsigned int N);
	~Span();
	Span(const Span &src);
	Span &operator = (const Span &rhs);

	void 			addNumber(int value);
	void			rangeIterator();
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif