/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:41:38 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:40 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char ** av)
{
    if (ac == 2)
    {
		std::string level = av[1];
		Harl cur;
		const std::string _methods[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for(size_t i = 0; i < 4; i++)
		{
			if (level == _methods[i])
			{
				cur.complain(level);
				return (0);
			}
		}
        std::cerr << RED "[Error]: Option not valid!" RESET << std::endl;
        std::cout << GRAY "Try: ./harl <level>" RESET << std::endl;
        return (1);
    }
    std::cerr << RED "[Error]: Wrong Input" << std::endl;
    std::cout << GRAY "Try: ./harl <level>" RESET << std::endl;
    return (1);
}
