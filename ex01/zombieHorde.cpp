/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:33:33 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/01 17:08:13 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name)
{
	int					i;
	std::stringstream	ss;
	std::string			str;

	Zombie	*horde = new Zombie[N];

	i = 0;
	while (i < N)
	{
		ss.str("");
		ss.clear();
		ss << (i + 1);
		ss >> str;
		horde[i].set_name(name + "_" + str);
		i++;
	}

	return (horde);
}
