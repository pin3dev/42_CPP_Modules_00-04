/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:36:23 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:36:25 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

static int	my_atoi(std::string str)
{
	int numb;

    numb = 0;
    if (str.length() == 1 && isdigit(str[0]) && !str.empty())
	    numb = std::atoi(str.c_str());
	return numb;
}

int main(int ac, char ** av)
{
    if (ac == 2)
    {
        int n_zomb = my_atoi(av[1]);
        if(n_zomb)
        {
            Zombie *zombies = zombieHorde(n_zomb,"Zombie");

            for (int i = 0; i < n_zomb; i++)
            {
                std::cout 
                << "["
	            << i + 1
	            << "] ";
                zombies[i].announce();
            }
            delete[] zombies;
            return (0);
        }
        std::cerr << RED "[Error]: Option not valid!" RESET << std::endl;
        std::cout << GRAY "Try: ./horde <Numb_of_Zombies_[1_until_9]>" RESET << std::endl;
        return (1);
    }
    std::cerr << RED "[Error]: Wrong Input" << std::endl;
    std::cout << GRAY "Try: ./horde <Numb_of_Zombies_[1_until_9]>" RESET << std::endl;
    return (1);
}
