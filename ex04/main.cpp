/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:03:55 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/03 13:35:10 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "colors.hpp"
#include "utils.hpp"

int	main(int argc, char *argv[])
{
	std::ifstream	i_file;
	std::string		str;
	char			c;

	if (argc != 4)
	{
		message_instruction();
		return (1);
	}

	i_file.open(argv[1]);

	if (i_file.fail())
	{
		std::cout << RED << "ERROR: file/directory doesn´t exist" << RESET << std::endl << std::endl;
		return (1);
	}

	while (!i_file.eof() && i_file >> std::noskipws >> c)
	{
		if (i_file.fail())
		{
			std::cout << RED << "ERROR: file cannot be read" << RESET << std::endl << std::endl;
        return (1);
		}
		str += c;
	}

	i_file.close();

	return (ft_find_and_replace(str, argv));
}
