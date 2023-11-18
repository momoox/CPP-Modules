/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:34:57 by momox             #+#    #+#             */
/*   Updated: 2023/11/18 18:23:23 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
public:
	Harl(void);
	~Harl(void);
	void complain( std::string level );
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif