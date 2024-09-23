/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:21:29 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/03 14:41:35 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "utils.hpp"

void	message_instruction(void)
{
	std::cout << std::endl;
	std::cout << GREEN << "     INSTRUCTION" << std::endl;
	std::cout << "     Give 3 parameters:" << std::endl;
	std::cout << "     - name of the file to read" << std::endl;
	std::cout << "     - word to be replaced" << std::endl;
	std::cout << "     - word to replace with" << std::endl;
	std::cout << "     Type your command like ";
	std::cout << YELLOW << "./replace test.txt hola adios" << RESET << std::endl;
	std::cout	<< std::endl;
}

int	ft_find_and_replace(std::string str, char **argv)
{
	std::ofstream	o_file;
	int				pos;

	o_file.open((std::string(argv[1]) + ".replace").c_str());
	if (o_file.fail())
	{
		std::cout << RED << "ERROR: problem with outfile"  << RESET << std::endl << std::endl;
		return (1);
	}

	for (int i = 0; i < (int)str.size(); ++i)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			o_file << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else o_file << str[i];
	}

	o_file.close();

	if (o_file.fail())
	{
		std::cerr << RED << "ERROR closing file: " << (std::string(argv[1]) + ".replace").c_str() << RESET << std::endl << std::endl;
		return (1);
	}
	else
	{
		std::cout << GREEN << "Successfully wrote to the file: " << (std::string(argv[1]) + ".replace").c_str() << RESET << std::endl << std::endl;
	}
	return (0);
}
