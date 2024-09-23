/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:16:21 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/04 15:11:59 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void    message_instruction(void)
{
    std::cout << std::endl;
    std::cout << GREEN << "     INSTRUCTION" << std::endl;
    std::cout << "     Give 1 parameter:" << std::endl;
    std::cout << YELLOW << "     - DEBUG" << std::endl;
    std::cout << "     - INFO" << std::endl;
    std::cout << "     - WARNING" << std::endl;
	std::cout << "     - ERROR" << std::endl;
	std::cout << "     - whatever you like" << GREEN << ", but in double quotes" << std::endl;
	std::cout << YELLOW << "     - EXIT " << GREEN << "to close Harl" << std::endl;
	std::cout << "     Type your command like ";
	std::cout << YELLOW << "./harlFilter INFO" << RESET << std::endl;
    std::cout   << std::endl;
}

int	check_argv(char *argv)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4;  i++)
	{
		if (argv == levels[i])
		{
			return (i);
		}
	}
	return (-1);
}

void	ft_switch(char *argv, Harl & harl)
{
	switch (check_argv(argv))
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << YELLOW << "[ Probably complaining about insignificant problems ]" << RESET << std::endl << std::endl;
	}
}

int main(int argc, char *argv[]) {
    Harl		harl;

	message_instruction();

	if (argc != 2)
	{
		std::cout << YELLOW << "[ Probably complaining about insignificant problems ]" << RESET << std::endl << std::endl;
	}
	else ft_switch(argv[1], harl);

	return (0);
}
