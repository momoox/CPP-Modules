/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:52:04 by edelarbr          #+#    #+#             */
/*   Updated: 2024/07/07 19:05:51 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <cstdio>
# include <fstream>
# include <string>
# include <sstream>
# include <map>

class BitcoinExchange {
private:
	std::vector<std::string> _inputVec;
	std::vector<std::string> _dataBaseVec;
	
	std::ifstream	_FirstCheck(std::string input);
	int				_InputFileIsValid(std::string current);
	void			_Operation(std::string input);

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	virtual ~BitcoinExchange();
	BitcoinExchange &operator = (const BitcoinExchange &rhs);

	void		change(std::string input, std::string db);
	float		stringToFloat(std::string value);

};

#endif
