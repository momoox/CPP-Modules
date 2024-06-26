/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:23:15 by mgeisler          #+#    #+#             */
/*   Updated: 2024/06/26 18:01:59 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <exception>
#include <stack>
#include <deque>

class RPN {
private:
	std::stack<int> _stack;
	
public:
	RPN();
	RPN(char* input);
	~RPN();
	RPN(const RPN& src);
	RPN& operator = (const RPN& rhs);

	void ValidInput();
	void RPNresult();

	class Args : public std::exception {
	public:
		const char* what() const throw() {
			return "Wrong arguments. Input should look like this: \"3 4 + 5 - 7 * 3 /\"\n";
		}
	};
};


	

#endif
