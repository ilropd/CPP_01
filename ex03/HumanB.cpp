/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:18:36 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/02 16:45:05 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << GREEN << "HumanB " << YELLOW << name;
    std::cout << GREEN << " now available with weapon ";
    std::cout << YELLOW << &_weapon->getType() << RESET << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << GREEN << "HumanB " << YELLOW << this->_name;
    std::cout << GREEN << " gone to infinity" << RESET << std::endl;
}

void    HumanB::attack()
{
    std::cout << YELLOW << this->_name << GREEN << " attacks with their ";
    std::cout << YELLOW << this->_weapon->getType() << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

