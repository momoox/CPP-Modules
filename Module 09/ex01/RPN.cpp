/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 00:14:14 by mgeisler          #+#    #+#             */
/*   Updated: 2025/05/06 20:45:27 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
}

RPN::RPN(std::string input) {
	int len = input.length();
	size_t op = 0;

	for(int i = len - 1; i >= 0; --i) {
		if (std::isdigit(input[i])) {
			this->_stack.push((input[i] - '0'));
		}
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
			if (!std::isdigit(input[i + 1])) {
				throw RPN::Args();
			}
			op++;
			this->_stack.push(input[i]);
		}
		else if(input[i] == ' ')
			continue;
		else {
			throw RPN::Args();
		}
	}

	if(this->_stack.size() < 3 || op == 0)
		throw RPN::Args();
}

RPN::~RPN() {}

RPN::RPN(const RPN& src) {
	*this = src;
}

RPN& RPN::operator=(const RPN& rhs) {
	if (this != &rhs)
		this->_stack = rhs._stack;
	return (*this);
}

void RPN::RPNresult() {
    std::stack<int> temp = this->_stack;
	int num1;
	int num2;
	int current = 0;

	while(temp.size() > 1) {
		if(!temp.empty() && temp.top() != 42 && temp.top() != 43 && temp.top() != 45 && temp.top() != 47) {
			num1 = temp.top();
			temp.pop();
			if(!temp.empty() && (temp.top() != 42 && temp.top() != 43 && temp.top() != 45 && temp.top() != 47)) {
				num2 = temp.top();
				temp.pop();
			}
		}
		if(!temp.empty() && (temp.top() == 42 || temp.top() == 43 || temp.top() == 45 || temp.top() == 47)) {
			current = temp.top();
			temp.pop();
		}

		if(!temp.empty() && current == 0)
			throw RPN::Args();

		switch (current)
		{
			case 43:
				temp.push(num1 + num2);
				current = 0;
				break;
			case 45:
				temp.push(num1 - num2);
				current = 0;
				break;
    		case 42:
				temp.push(num1 * num2);
				current = 0;
				break;
    		case 47: 
    		    temp.push(num1 / num2); 
				current = 0;
    		    break;
			default:
				throw RPN::Args();
		}
	}
	std::cout << "Result: " << temp.top() << std::endl;
}

 