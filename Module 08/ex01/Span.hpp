/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:34:08 by mgeisler          #+#    #+#             */
/*   Updated: 2025/02/05 15:03:58 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <climits>
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
	// void			rangeIterator();
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif