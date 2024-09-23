/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:57:00 by irozhkov          #+#    #+#             */
/*   Updated: 2024/08/01 18:20:23 by irozhkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	init_str = "HI THIS IS BRAIN";
	std::string *stringPTR = &init_str;
	std::string& stringREF = init_str;

	std::cout << std::endl;
	std::cout << "The memory address of the string variable: " << &init_str << std::endl;
	std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable:  " << init_str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	std::cout << std::endl;

	return (0);
}
