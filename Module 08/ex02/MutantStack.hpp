/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:09:36 by mgeisler          #+#    #+#             */
/*   Updated: 2024/06/10 16:39:55 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>
# include <vector>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
private:

public:
	MutantStack() : std::stack<T>(){};
	MutantStack(const MutantStack& src);
	~MutantStack() {};
	MutantStack &operator = (const MutantStack &rhs);

	typedef typename std::deque<T>::iterator iterator;
	iterator begin() {
		return this->c.begin();
	};
	iterator end() {
		return this->c.end();
	};
};

#endif
