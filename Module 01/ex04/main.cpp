/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momox <momox@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:36:55 by momox             #+#    #+#             */
/*   Updated: 2023/10/22 00:29:07 by momox            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream outfile;
	std::string buff;
	std::string str1;
	std::string str2;
	size_t	pos;

	if (argc != 4)
	{
		std::cout << "Error input." << std::endl;
		return (1);
	}
	str1 = argv[2];
	str2 = argv[3];
	file.open(argv[1]);
	if (!file.is_open())
		return (std::cout << "Error opening file." << std::endl, 1);
	outfile.open((std::string)argv[1] += ".replace");
	if (!outfile.is_open())
		return (std::cout << "Error creating output file." << std::endl, 1);
	while (std::getline(file, buff))
	{
		while ((pos = buff.find(str1)) != std::string::npos)
		{
			buff.erase(pos, str1.length());
			buff.insert(pos, str2);
		}
		outfile << buff << std::endl;
	}
	return (0);
}
