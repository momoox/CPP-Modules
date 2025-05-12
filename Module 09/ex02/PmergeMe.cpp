/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:31 by mgeisler          #+#    #+#             */
/*   Updated: 2025/05/12 18:34:48 by mgeisler         ###   ########.fr       */
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
	for(it = _deque.begin(); it != _deque.end() && count < 5; ++it, count++) {
		std::cout << *it << " ";
	}

	if(count == 5)
		std::cout << "[...]";
	
	std::cout << std::endl;
}

void	PmergeMe::_printAfterDeque() {
	int	count = 0;

	std::cout << "After: ";
	std::deque<int>::iterator it;
	for(it = _deque.begin(); it != _deque.end() && count < 5; ++it, ++count) {
		std::cout << *it << " ";
	}

	if(count == 5)
		std::cout << "[...]";
			
	std::cout << std::endl;
}

void	PmergeMe::_printBeforeList() {
	int	count = 0;

	std::cout << "Before: ";
	std::list<int>::iterator it;
	for(it = _list.begin(); it != _list.end() && count < 5; ++it, ++count) {
		std::cout << *it << " ";
	}
	if(count == 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

void	PmergeMe::_printAfterList() {
	int	count = 0;

	std::cout << "After: ";
	std::list<int>::iterator it;
	for(it = _list.begin(); it != _list.end() && count < 5; ++it, ++count) {
		std::cout << *it << " ";
	}
	if(count == 5)
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

int	PmergeMe::_Jacobsthal(int k) {
	return round((pow(2, k + 1) + pow(-1, k)) / 3);
}

void PmergeMe::_MergeDeque(std::deque<int>& main, std::deque<int>& pend) {
    std::deque<int>::iterator end;

    if (pend.size() == 1) {
        end = std::upper_bound(main.begin(), main.end(), pend[0]);
        main.insert(end, pend[0]);
        return;
    }
    
    int jc = 3;
    int count = 0;
    size_t idx;
    size_t decrease;
    
    while (!pend.empty()) {
        // Calcul de l'indice à partir des nombres de Jacobsthal
        idx = _Jacobsthal(jc) - _Jacobsthal(jc - 1);
        
        if (idx > pend.size())
            idx = pend.size();
            
        decrease = 0;
        
        while (idx) {
            // Position de recherche
            if (_Jacobsthal(jc + count) - decrease <= main.size())
                end = main.begin() + std::min(static_cast<size_t>(_Jacobsthal(jc + count) - decrease), main.size());
            else
                end = main.end();
            
            // Élément à insérer
            int targetValue = pend[idx - 1];
            
            // Trouver la position d'insertion correcte
            end = std::upper_bound(main.begin(), end, targetValue);
            
            // Insérer l'élément et supprimer de pend
            main.insert(end, targetValue);
            pend.erase(pend.begin() + (idx - 1));
            
            idx--;
            decrease++;
            count++;
        }
        jc++;
    }
}


int	PmergeMe::_DequeSortChecker() {
	size_t i = 0;

	while (i < _deque.size() - 1) {
		if (_deque[i] > _deque[i + 1])
			return (0);
		i++;
	}
	return (1);
}


void	PmergeMe::_DequeSort(std::deque<int> &main, std::deque<int> &pend, int order) {
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
		_MergeDeque(main, pend) ;
	
	else if (order < 16) {
		_DequeSort(main, pend, order * 2);
	}
		
	else {
		_DequeSort(main, pend, 1);
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

	size_t mid = _deque.size() / 2;
	std::deque<int> main(_deque.begin(), _deque.begin() + mid);
	std::deque<int> pend(_deque.begin() + mid, _deque.end());
	_DequeSort(main, pend, 1);
	_printAfterDeque();
	
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : ";
}


void	PmergeMe::_MergeList(std::list<int>& main, std::list<int>& pend) {
	std::list<int>::iterator end;
	
	if (pend.size() == 1) {
		end = std::upper_bound(main.begin(), main.end(), *pend.begin());
        main.insert(end, *pend.begin());
		return;
    }
	
	int jc = 3;
	int count = 0;
	size_t idx;
	size_t decrease;
	
	while (!pend.empty()) {
		idx = _Jacobsthal(jc) - _Jacobsthal(jc - 1);

		if (idx > pend.size())
			idx = pend.size();

		decrease = 0;

		while (idx) {
			end = main.begin();

			if (_Jacobsthal(jc + count) - decrease <= main.size()) {
				end = main.begin();
				std::advance(end, _Jacobsthal(jc + count) - decrease);
			}

			else
				end = main.end();

			std::list<int>::iterator targetIt = pend.begin();
			std::advance(targetIt, idx - 1);
			end = std::upper_bound(main.begin(), end, *targetIt);

			main.insert(end, *targetIt);
			pend.erase(targetIt);

			idx--;
			decrease++;
			count++;
		}
		jc++;
	}
	
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


void	PmergeMe::_ListSort(std::list<int> &main, std::list<int> &pend, int order) {
	if (_list.size() < 2)
		return;

	std::list<int>::iterator idx = main.begin();
	std::list<int>::iterator idxBis = idx;
	std::advance(idxBis, 1);
	
	for(; idxBis != main.end(); idx++) {
		if (*idx > *idxBis) {
			int copy = *idxBis;
			*idxBis = *idx;
			*idx = copy;
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

	_printBeforeList();
	
	std::list<int>::iterator midIt = _list.begin();
	std::advance(midIt, _list.size() / 2);
	std::list<int> main(_list.begin(), midIt);
	std::list<int> pend(midIt, _list.end());
	
	_ListSort(main, pend, 1);
	
	_printAfterList();
	
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list : ";
}
