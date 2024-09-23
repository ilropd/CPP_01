/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:14:21 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/04 13:50:57 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	std::cout << YELLOW << "HARL" << GREEN << " now exists" << RESET << std::endl;
}

Harl::~Harl(void)
{
	std::cout << YELLOW << "HARL" << GREEN << " goes to infinity" << RESET << std::endl;
}

void	Harl::debug( void )
{
	std::cout << YELLOW << "HARL debug --> " << GREEN << "I love having extra ";
	std::cout << "bacon for my 7XL-double-cheese-triple-pickle-special-ketchup ";
	std::cout << "burger. I really do!" << RESET << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << YELLOW << "HARL info --> " << GREEN << "I cannot believe adding ";
	std::cout << "extra bacon costs more money. You didn’t put enough bacon in my ";
	std::cout << "burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << YELLOW << "HARL warning --> " << GREEN << "I think I deserve to ";
	std::cout << "have some extra bacon for free. I’ve been coming for years ";
	std::cout <<"whereas you started working here since last month." << RESET << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << YELLOW << "HARL error --> " << GREEN << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << RESET << std::endl << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*complains[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complains[i])();
			return ;
		}
	}
}
