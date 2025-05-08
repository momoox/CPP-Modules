/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:31 by mgeisler          #+#    #+#             */
/*   Updated: 2025/05/08 19:55:39 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& src) {
	*this = src;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
	if(this != &rhs) {
		this->_deque = rhs._deque;
		this->_list = rhs._list;
	}
	
	return(*this);
}

void	PmergeMe::_printBeforeDeque() {
	int	count = 0;

	std::cout << "Before: ";
	std::deque<int>::iterator it;
	for(it = _deque.begin(); it != _deque.end() && count <= 5; ++it, count++) {
		std::cout << *it << " ";
	}

	if(count > 5)
		std::cout << "[...]" << std::endl;
	
	else
		std::cout << std::endl;
}

void	PmergeMe::_printAfterDeque() {
	int	count = 0;

	std::cout << "After: ";
	std::deque<int>::iterator it;
	for(it = _deque.begin(); it != _deque.end() && count <= 5; ++it, ++count) {
		std::cout << *it << " ";
	}

	if(count > 5)
		std::cout << "[...]" << std::endl;
			
	else
		std::cout << std::endl;
}

void	PmergeMe::_printBeforeList() {
	int	count = 0;

	std::cout << "Before: ";
	std::list<int>::iterator it;
	for(it = _list.begin(); it != _list.end() && count <= 5; ++it, ++count) {
		std::cout << *it << " ";
	}
	if(count > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

void	PmergeMe::_printAfterList() {
	int	count = 0;

	std::cout << "After: ";
	std::list<int>::iterator it;
	for(it = _list.begin(); it != _list.end(); ++it, ++count) {
		std::cout << *it << " ";
	}
	// if(count > 5)
	// 	std::cout << "[...]";
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

int	PmergeMe::_Jacobsthal(int k) {
	return round((pow(2, k + 1) + pow(-1, k)) / 3);
}

// void	PmergeMe::_mergeDeque(std::deque<int>& left, std::deque<int>& right, std::deque<int>& _deque) {
// 	size_t i = 0;
// 	size_t j = 0;
// 	size_t k = 0;
// 	int		lastInsert = -1;

// 	while(i < left.size() && j < right.size()) {
// 		if(left[i] < right[j]) {
// 			if(lastInsert != left[i]){
// 				_deque[k] = left[i];
// 				lastInsert = left[i];
// 				k++;
// 			}
// 			i++;
// 		}
// 		else {
// 			if(lastInsert != right[j]){
// 				_deque[k] = right[j];
// 				lastInsert = right[j];
// 				k++;
// 			}
// 			j++;
// 		}
// 	}

// 	while(i < left.size()) {
//    	 if(lastInsert != left[i]) {
//    	     _deque[k] = left[i];
//    	     lastInsert = left[i];
//    	     k++;
//    	 }
//    	 i++;
// }	
// 	while(j < right.size()) {
//     	if(lastInsert != right[j]) {
//     	    _deque[k] = right[j];
//     	    lastInsert = right[j];
//     	    k++;
//     	}
//     	j++;
// 	}
// 	_deque.resize(k);
// }


int	PmergeMe::_DequeSortChecker() {
	size_t i = 0;

	while (i < _deque.size() - 1) {
		if (_deque[i] > _deque[i + 1])
			return (0);
		i++;
	}
	return (1);
}


void	PmergeMe::_DequeSort(int order) {
	int len = _deque.size();

	if(len < 2)
		return;

	int idx = 0;
	int idxBis = 1;
	
	while (idx < len - 1) {
		if(_deque[idx] > _deque[idxBis]) {
			int copyIdx = _deque[idx];
			int copyIdxBis = _deque[idxBis];
			
			_deque[idx] = copyIdxBis;
			_deque[idxBis] = copyIdx;
		}
		idx++;
		idxBis++;
	}
	
	if (_DequeSortChecker())
		return ;
	
	else if (order < 16) {
		_DequeSort(order * 2);
	}
		
	else {
		_DequeSort(1);
	}
}

void	PmergeMe::DequeCreation(std::string input) {
	_parsing(input);
	
	std::istringstream iss(input);
	std::string token;
	while (std::getline(iss, token, ' ')) {
		if(token.empty()) {
			break;
		}
		_deque.push_back(_stringToInt(token));
	}
}

void	PmergeMe::DequeStart() {
	_printBeforeDeque();
	_DequeSort(1);
	_printAfterDeque();
	
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : ";
}

void	PmergeMe::_MergeList(std::list<int>& main, std::list<int>& pend) {

	std::cout << "-----------------------MERGE TIME-----------------------" << std::endl << std::endl;
	
	std::list<int>::iterator end;
	
	if (pend.size() == 1) {
		end = std::upper_bound(main.begin(), main.end(), *pend.begin());
        main.insert(end, *pend.begin());
    }
	
	int jc = 3;
	int count = 0;
	size_t idx;
	size_t decrease;
	
	while (!pend.empty()) {
		idx = _Jacobsthal(jc) - _Jacobsthal(jc - 1);
		std::cout << "idx: " << idx << " | pend size: " << pend.size() << std::endl;
		if (idx > pend.size())
			idx = pend.size();

		decrease = 0;
		while (idx) {
			// Determine the insertion point based on the Jacobsthal index and insert the element.
			end = main.begin();
			std::cout << "premier if: " << _Jacobsthal(jc + count) - decrease << std::endl;
			if (_Jacobsthal(jc + count) - decrease <= main.size()) {
				end = main.begin();
				std::advance(end, _Jacobsthal(jc + count) - decrease);
				std::cout << "end dans premier if: " << *end << std::endl;
			}
			else
				end = main.end();
			// Binary sort 
			end = std::upper_bound(main.begin(), end, (*(pend.begin()) + idx - 1));
			
			main.insert(end, (*(pend.begin()) + idx - 1));
			end = pend.begin();
			std::advance(end, idx - 1);
			pend.erase(end);

			idx--;
			decrease++;
			count++;
		}
		jc++;
	}

	//6 87 45 987 23 3 397 74 5 90 265 19 56
	//3 5 6 6 7 8 9 23 45 87 397 398 987 
	//il est pas en forme le frerot
	
	// while (!main.empty() && !pend.empty()) {
	// 	std::cout << "current main: " << main.front() << " | current pend: " << pend.front() << std::endl;	
	// 	if (main.front() < pend.front()) {
	// 		result.push_back(main.front());
	// 		main.pop_front();
	// 	} else {
	// 		result.push_back(pend.front());
	// 		pend.pop_front();
	// 	}
	// }
	
	// while (!main.empty()) {
	// 	result.push_back(main.front());
	// 	main.pop_front();
	// }
	
	// while (!pend.empty()) {
	// 	result.push_back(pend.front());
	// 	pend.pop_front();
	// }
	
	_list = main;
}

int	PmergeMe::_ListSortChecker(std::list<int> &main) {
	size_t i = 0;

	std::list<int>::iterator idx = main.begin();
	std::list<int>::iterator idxBis = idx;
	std::advance(idxBis, 1);
	
	while (i < main.size() - 1) {
		if (*idx > *idxBis)
			return (0);
		i++;
		idx++;
		idxBis++;
	}
	return (1);
}


//▗▖ ▗▖ ▗▄▖ ▗▄▄▖ ▗▖ ▗▖    ▗▄▄▄▖▗▖  ▗▖    ▗▄▄▖ ▗▄▄▖  ▗▄▖  ▗▄▄▖▗▄▄▖ ▗▄▄▄▖ ▗▄▄▖ ▗▄▄▖
//▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌▗▞▘      █  ▐▛▚▖▐▌    ▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌   ▐▌ ▐▌▐▌   ▐▌   ▐▌   
//▐▌ ▐▌▐▌ ▐▌▐▛▀▚▖▐▛▚▖       █  ▐▌ ▝▜▌    ▐▛▀▘ ▐▛▀▚▖▐▌ ▐▌▐▌▝▜▌▐▛▀▚▖▐▛▀▀▘ ▝▀▚▖ ▝▀▚▖
//▐▙█▟▌▝▚▄▞▘▐▌ ▐▌▐▌ ▐▌    ▗▄█▄▖▐▌  ▐▌    ▐▌   ▐▌ ▐▌▝▚▄▞▘▝▚▄▞▘▐▌ ▐▌▐▙▄▄▖▗▄▄▞▘▗▄▄▞▘


void	PmergeMe::_ListSort(std::list<int> &main, std::list<int> &pend, int order) {
	if (_list.size() < 2)
		return;

	//std::cout << "-----------------ORDER " << order << "------------------------" << std::endl << std::endl;

	std::list<int>::iterator idx = main.begin();
	std::list<int>::iterator idxBis = idx;
	std::advance(idxBis, 1);
	
	for(; idxBis != main.end(); idx++) {
		//std::cout << "current idx: " << *idx << " current idxBis: " << *idxBis << std::endl << std::endl;
		if (*idx > *idxBis) {
			//std::cout << "before swap" << std::endl;
			//std::cout << "idx: " << *idx << " idxBis: " << *idxBis << std::endl << std::endl;
			int copy = *idxBis;
			*idxBis = *idx;
			*idx = copy;
			//std::cout << "after swap" << std::endl;
			//std::cout << "idx: " << *idx << " idxBis: " << *idxBis << std::endl << std::endl;
		}
		idxBis++;
	}
	
	if (_ListSortChecker(main))
		_MergeList(main, pend);
		
	else if (order < 16)
		_ListSort(main, pend, order * 2);
	
	else
		_ListSort(main, pend, 1);
	
}


//▗▖ ▗▖ ▗▄▖ ▗▄▄▖ ▗▖ ▗▖    ▗▄▄▄▖▗▖  ▗▖    ▗▄▄▖ ▗▄▄▖  ▗▄▖  ▗▄▄▖▗▄▄▖ ▗▄▄▄▖ ▗▄▄▖ ▗▄▄▖
//▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌▗▞▘      █  ▐▛▚▖▐▌    ▐▌ ▐▌▐▌ ▐▌▐▌ ▐▌▐▌   ▐▌ ▐▌▐▌   ▐▌   ▐▌   
//▐▌ ▐▌▐▌ ▐▌▐▛▀▚▖▐▛▚▖       █  ▐▌ ▝▜▌    ▐▛▀▘ ▐▛▀▚▖▐▌ ▐▌▐▌▝▜▌▐▛▀▚▖▐▛▀▀▘ ▝▀▚▖ ▝▀▚▖
//▐▙█▟▌▝▚▄▞▘▐▌ ▐▌▐▌ ▐▌    ▗▄█▄▖▐▌  ▐▌    ▐▌   ▐▌ ▐▌▝▚▄▞▘▝▚▄▞▘▐▌ ▐▌▐▙▄▄▖▗▄▄▞▘▗▄▄▞▘


void	PmergeMe::ListCreation(std::string input) {
	_parsing(input);
	
	std::istringstream iss(input);
	std::string token;
	while (std::getline(iss, token, ' ')) {
		if(token.empty()) {
			break;
		}
		_list.push_back(_stringToInt(token));
	}
}

void	PmergeMe::ListStart() {

	// _printBeforeList();
	std::list<int>::iterator midIt = _list.begin();
	std::advance(midIt, _list.size() / 2);
	std::list<int> main(_list.begin(), midIt);
	std::list<int> pend(midIt, _list.end());
	
	_ListSort(main, pend, 1);
	_printAfterList();
	
	std::cout << "Time to process a range of " << _list.size() << " elements with std::map : ";
}
