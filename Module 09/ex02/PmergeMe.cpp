/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:31 by mgeisler          #+#    #+#             */
/*   Updated: 2024/07/19 10:54:45 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& src) {
	*this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
	if(this != &rhs)
		this->_deque = rhs._deque;
		this->_map = rhs._map;
	return(*this);
}

void	PmergeMe::_printBeforeDeque() {
	int	count = 0;

	std::cout << "Before: ";
	std::deque<int>::iterator it;
	for(it = _deque.begin(); it != _deque.end() && count <= 4; ++it, count++) {
		std::cout << *it << " ";
	}

	if(count >= 4)
		std::cout << "[...]" << std::endl;
}

void	PmergeMe::_printAfterDeque() {
	int	count = 0;

	std::cout << "After: ";
	std::deque<int>::iterator it;
	for(it = _deque.begin(); it != _deque.end() && count <= 4; ++it, ++count) {
		std::cout << *it << " ";
	}

	if(count >= 4)
		std::cout << "[...]" << std::endl;
}

void	PmergeMe::_printBeforeMap() {
	int	count = 0;

	std::cout << "Before: ";
	std::map<int, std::string>::iterator it;
	for(it = _map.begin(); it != _map.end() && count <= 4; ++it, ++count) {
		std::cout << it->first << " ";
	}
	if(count >= 4)
		std::cout << "[...]";
	std::cout << std::endl;
}

void	PmergeMe::_printAfterMap() {
	int	count = 0;

	std::cout << "After: ";
	std::map<int, std::string>::iterator it;
	for(it = _map.begin(); it != _map.end() && count <= 4; ++it, ++count) {
		std::cout << it->first << " ";
	}
	if(count >= 4)
		std::cout << "[...]";
	std::cout << std::endl;
}

int	PmergeMe::_stringToInt(std::string& input) {
	int result = 0;
    int sign = 1;

    size_t i = 0;
    while (i < input.length() && std::isspace(input[i])) {
        i++;
    }
    if (i < input.length() && (input[i] == '+' || input[i] == '-')) {
		if (input[i++] == '-')
			sign = -1;
		else
			sign = 1;
    }
    while (i < input.length() && std::isdigit(input[i])) {
        result = result * 10 + (input[i++] - '0');
    }

    return sign * result;
}

void	PmergeMe::_parsing(std::string input) {
	size_t len = input.size();
	if(len < 1)
		throw std::invalid_argument("Error: Not enough values entered.\n");

	for(size_t i = 0; i < input.size(); ++i) {
		if(input[i] == '-')
			throw std::invalid_argument("Error: Number not positive.\n");
		if(!std::isdigit(input[i]) && input[i] != ' ' && input[i] != '-')
			throw std::invalid_argument("Error: Value is not an integer.\n");
	}
}

void	PmergeMe::_mergeDeque(std::deque<int>& left, std::deque<int>& right, std::deque<int>& _deque) {
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	int		lastInsert = -1;

	while(i < left.size() && j < right.size()) {
		if(left[i] < right[j]) {
			if(lastInsert != left[i]){
				_deque[k] = left[i];
				lastInsert = left[i];
				k++;
			}
			i++;
		}
		else {
			if(lastInsert != right[j]){
				_deque[k] = right[j];
				lastInsert = right[j];
				k++;
			}
			j++;
		}
	}

	while(i < left.size()) {
   	 if(lastInsert != left[i]) {
   	     _deque[k] = left[i];
   	     lastInsert = left[i];
   	     k++;
   	 }
   	 i++;
}	
	while(j < right.size()) {
    	if(lastInsert != right[j]) {
    	    _deque[k] = right[j];
    	    lastInsert = right[j];
    	    k++;
    	}
    	j++;
	}
	_deque.resize(k);
}

void	PmergeMe::_DequeSort(std::deque<int>& _deque) {
	size_t len = _deque.size();
	size_t mid = 0;

	if(len < 2)
		return;

	mid = len / 2;
	std::deque<int> left;
	std::deque<int> right;
	left.resize(mid);
	right.resize(len - mid);

	size_t j = 0;
	for(size_t i = 0; i < len; ++i) {
		if(i < mid) {
			left[i] = _deque[i];
		}
		else {
			right[j] = _deque[i];
			j++;
		}
	}
	PmergeMe::_DequeSort(left);
	PmergeMe::_DequeSort(right);
	PmergeMe::_mergeDeque(left, right, _deque);
}

void	PmergeMe::DequeCreation(std::string input) {
	PmergeMe::_parsing(input);
	
	std::istringstream iss(input);
	std::string token;
	while (std::getline(iss, token, ' ')) {
		if(token.empty()) {
			break;
		}
		_deque.push_back(PmergeMe::_stringToInt(token));
	}
}

void	PmergeMe::DequeStart() {
	_printBeforeDeque();
	_DequeSort(_deque);
	_printAfterDeque();

	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : ";
}

void	PmergeMe::_mergeMap(std::map<int, std::string>& left, std::map<int, std::string>& right, std::map<int, std::string>& _map) {
	std::map<int, std::string>::iterator it1 = left.begin();
	std::map<int, std::string>::iterator it2 = right.begin();

	while(it1 != left.end() && it2 != right.end()) {
		if(it1->first < it2->first) {
			_map.insert(std::pair<int, std::string>(it1->first, it1->second));
			it1++;
		}
		else {
			_map.insert(std::pair<int, std::string>(it2->first, it2->second));
			it2++;
		}
	}
	while(it1 != left.end()) {
		_map.insert(std::pair<int, std::string>(it1->first, it1->second));
		it1++;
	}
	while(it2 != right.end()) {
		_map.insert(std::pair<int, std::string>(it2->first, it2->second));
		it2++;
	}
}

void	PmergeMe::_MapSort(std::map<int, std::string>& _map) {
	size_t len = _map.size();
	size_t mid = 0;

	if(len < 2)
		return;

	mid = len / 2;
	std::map<int, std::string> left;
	std::map<int, std::string> right;

	size_t i = 0;
	std::map<int, std::string>::iterator it = _map.begin();
	while(it != _map.end()) {
		if(i < mid) {
			left.insert(std::pair<int, std::string>(it->first, it->second));
		}
		else {
			right.insert(std::pair<int, std::string>(it->first, it->second));
		}
		i++;
		it++;
	}
	PmergeMe::_MapSort(left);
	PmergeMe::_MapSort(right);
	PmergeMe::_mergeMap(left, right, _map);
}

void	PmergeMe::MapCreation(std::string input) {
	PmergeMe::_parsing(input);
	
	std::istringstream iss(input);
	std::string token;
	while (std::getline(iss, token, ' ')) {
		if(token.empty()) {
			break;
		}
		_map.insert(std::pair<int, std::string>(PmergeMe::_stringToInt(token), token));
	}
}

void	PmergeMe::MapStart() {

	// _printBeforeMap();
	PmergeMe::_MapSort(_map);
	// _printAfterMap();
	
	std::cout << "Time to process a range of " << _map.size() << " elements with std::map : ";
}
