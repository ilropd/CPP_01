/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:35:22 by irozhkov          #+#    #+#             */
/*   Updated: 2024/07/31 20:05:37 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "boo";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->_name << ": " << RED << "my...no more feel...brainz here..." << RESET << std::endl;
}

void	Zombie::announce()
{
	std::cout << YELLOW << this->_name << ": " << GREEN << "my feel ur brAinz!" << RESET << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
