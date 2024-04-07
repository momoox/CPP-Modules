/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:52:04 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/11 17:14:51 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	virtual ~BitcoinExchange();
	BitcoinExchange &operator = (const BitcoinExchange &rhs);

	std::string	change(std::string input, std::string db);
	void		InputFileIsValid(std::string input);

private:
	float		_value;
	std::string	_date;
};

#endif // BITCOINEXCHANGE_HPP
