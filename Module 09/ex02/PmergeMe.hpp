/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:35 by mgeisler          #+#    #+#             */
/*   Updated: 2025/05/12 17:36:52 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <cmath>
# include <iterator>
# include <cstdlib>
# include <climits>
# include <sstream>
# include <cctype>
# include <ctime>
# include <iomanip>
# include <list>
# include <deque>

class PmergeMe {
private:
	std::deque<int>				_deque;
	std::list<int>				_list;

	void						_parsing(std::string input);
	int							_stringToInt(std::string& input);
	int							_isInt(std::string& input);

	void						_printBeforeDeque();
	void						_printAfterDeque();
	void						_printBeforeList();
	void						_printAfterList();

	int							_Jacobsthal(int k);

	int							_DequeSortChecker();
	int							_ListSortChecker(std::list<int>& main);
	
	void						_DequeSort(std::deque<int> &main, std::deque<int> &pend, int order);
	void						_MergeDeque(std::deque<int>& main, std::deque<int>& pend);
	
	void						_ListSort(std::list<int>& main, std::list<int>& pend, int order);
	void						_MergeList(std::list<int>& main, std::list<int>& pend);

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator = (const PmergeMe& rhs);

	void		DequeCreation(std::string input);
	void		ListCreation(std::string input);

	void		DequeStart();
	void		ListStart();
};

#endif