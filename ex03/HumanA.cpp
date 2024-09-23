/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:03:35 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/02 16:21:54 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << GREEN << "HumanA " << YELLOW << name;
	std::cout << GREEN << " now available with weapon ";
	std::cout << YELLOW << weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GREEN << "HumanA " << YELLOW << this->_name; 
    std::cout << GREEN << " gone to infinity" << RESET << std::endl;
}

void	HumanA::attack()
{
	std::cout << YELLOW << this->_name << GREEN << " attacks with their ";
	std::cout << YELLOW << this->_weapon.getType() << RESET << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
