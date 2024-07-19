/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:35 by mgeisler          #+#    #+#             */
/*   Updated: 2024/07/19 10:52:19 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <climits>
# include <sstream>
# include <cctype>
# include <chrono>
# include <iomanip>
# include <map>
# include <deque>

class PmergeMe {
private:
	std::deque<int>				_deque;
	std::map<int, std::string>	_map;

	void						_parsing(std::string input);
	int							_stringToInt(std::string& input);
	int							_isInt(std::string& input);

	void						_printBeforeDeque();
	void						_printAfterDeque();
	void						_printBeforeMap();
	void						_printAfterMap();

	void						_DequeSort(std::deque<int>& _deque);
	void						_mergeDeque(std::deque<int>& left, std::deque<int>& right, std::deque<int>& result);
	
	void						_MapSort(std::map<int, std::string>& _map);
	void						_mergeMap(std::map<int, std::string>& left, std::map<int, std::string>& right, std::map<int, std::string>& _deque);

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator = (const PmergeMe& rhs);

	void		DequeCreation(std::string input);
	void		MapCreation(std::string input);

	void		DequeStart();
	void		MapStart();
};

#endif