/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:35:22 by irozhkov          #+#    #+#             */
/*   Updated: 2024/07/30 20:21:17 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << YELLOW << this->_name << ": " << RED << "grrr...no more brainzzz..." << RESET << std::endl;
}

void	Zombie::announce()
{
	std::cout << YELLOW << this->_name << ": " << GREEN << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
