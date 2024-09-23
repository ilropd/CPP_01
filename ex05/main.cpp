/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:16:21 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/04 13:49:53 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void    message_instruction(void)
{
    std::cout << std::endl;
    std::cout << GREEN << "     INSTRUCTION" << std::endl;
    std::cout << "     You can use these commands:" << std::endl;
    std::cout << YELLOW << "     - DEBUG" << std::endl;
    std::cout << "     - INFO" << std::endl;
    std::cout << "     - WARNING" << std::endl;
	std::cout << "     - ERROR" << std::endl;
	std::cout << "     - EXIT " << GREEN << "to close Harl" << std::endl;
    std::cout   << std::endl;
}

void	message_bye(void)
{
	std::cout << YELLOW << "Hope you had fun! See ya soon!" << RESET << std::endl;
}

int main() {
    Harl		harl;
	int			valid_command;
	std::string	command;
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	message_instruction();
	while (command != "EXIT")
	{
		valid_command = 0;
		std::cout << GREEN << "Enter your command: " << RESET;
		if (!std::getline(std::cin, command))
		{
			if (std::cin.eof())
			{
				std::cout << RED << "WARNING: End of input" << RESET << std::endl;
				return (1);
			}
			else
			{
				std::cerr << RED << "ERROR ocured" << RESET << std::endl;
				return (1);
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (command == levels[i])
			{
				valid_command = 1;
				break ;
			}
		}

		if (valid_command == 1)
		{
			harl.complain(command);
		}
		else if (valid_command == 0 && command != "EXIT")
			{
				std::cout << YELLOW << "WARNING: wrong command" << RESET << std::endl << std::endl;
			}
		}

	message_bye();
	return (0);
}
