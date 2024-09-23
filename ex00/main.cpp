/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:46:53 by irozhkov          #+#    #+#             */
/*   Updated: 2024/07/31 15:25:59 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name);

int	main(void)
{
	Zombie *brainer = newZombie("Homer");
	brainer->announce();
	delete brainer;

	randomChump("Chucky the insane doll");

	return (0);
}
