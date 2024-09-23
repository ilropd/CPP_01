/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:01:28 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/01 17:16:21 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <cstring>

Zombie *zombieHorde(int N, std::string name);

int	ft_isnum(const std::string zombie_number)
{
	int	i;

	i = 0;
	while (zombie_number[i])
	{
		if (!std::isdigit(zombie_number[i]))
			return (1);
		i++;
	}
	return (0);
}

void	message_instruction(void)
{
	std::cout << std::endl;
	std::cout << GREEN << "     INSTRUCTION:" << std::endl;
	std::cout << "     Give 2 parameters: number of zombies & name of zombie" << std::endl;
	std::cout << "     Type your command in command line like ";
	std::cout << YELLOW << "./horde 5 Muzzy" << RESET << std::endl << std::endl;
}

int	main(int argc, const char *argv[])
{
	int			zombie_number;
	std::string	zombie_name;

	if (argc != 3)
	{
		message_instruction();
		return (1);
	}
	else
	{
		if (ft_isnum(argv[1]) || std::atoi (argv[1]) <= 0)
		{
			std::cout << RED << "ERROR: wrong number of zombies!" << RESET << std::endl;
			return (1);
		}
		if (std::strlen(argv[2]) < 1)
		{
			std::cout << RED << "ERROR: wrong name of zombie!" << RESET << std::endl;
            return (1);
		}
		zombie_number = std::atoi (argv[1]);
		zombie_name = argv[2];
	}

	Zombie *horde = zombieHorde(zombie_number, zombie_name);

	for (int i = 0; i < zombie_number; ++i)
	{
		horde[i].announce();
	}

	delete[] horde;

	return (0);
}
