/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:34:52 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:34:55 by ivbatist         ###   ########.fr       */
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
            Zombie	*cur = NULL;
            cur = newZombie("Strong_Zombie");
            for (int cont = 0; cont < n_zomb; cont++)
            {
                std::cout << std::endl;
                cur->announce();
                std::cout << BKGRAY "---- "
                << "capturing the human n" 
                << (cont + 1) 
                << " ----" RESET << std::endl;
                randomChump("Weak_Human_Zombie");
            }
            std::cout << std::endl
            << BKGRAY "---- "
            << "Strong_Zombie finished his goal"
            << " ----" RESET << std::endl;
            delete cur;
            return (0);
        }
        std::cerr << RED "[Error]: Option not valid!" RESET << std::endl;
        std::cout << GRAY "Try: ./brainz <[Numb_of_Humans_[1_until_9]>" RESET << std::endl;
        return (1);
    }
    std::cerr << RED "[Error]: Wrong Input" << std::endl;
    std::cout << GRAY "Try: ./brainz <Numb_of_Humans_[1_until_9]>" RESET << std::endl;
    return (1);
}
