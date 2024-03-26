/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:33:29 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 12:13:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iomanip>

static void	printHeader(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}

int main()
{
    Animal* zoo[20];

    printHeader("Morning Zoo");
    for (int c = 0; c < 20; c++)
    {
        std::cout << std::endl << GREEN "WakingAnimalZoo[" << (c + 1) << "]:" << RESET << std::endl;
        if (c < 10)
        {
            zoo[c] = new Dog();
            continue;
        }
        zoo[c] = new Cat();
    }
    printHeader("Open Zoo");
    for (int m = 0; m < 20; m++)
    {
        int col = 15;
        if(m > 9)
            col++;
        std::cout << "ZooAnimal" << "[" << m << "]" << std::setw(3) << " | " << std::setw(4) 
        << GRAY "Talks: " RESET;
        zoo[m]->makeSound();
        std::cout << std::setw(col) << " | " << GRAY "Thoughts: " RESET;
        if(zoo[m]->getType() == "Cat")
            std::cout << static_cast<Cat *>(zoo[m])->getBrainIdea() << std::endl << std::endl;
        if(zoo[m]->getType() == "Dog")
            std::cout << static_cast<Dog *>(zoo[m])->getBrainIdea() << std::endl << std::endl;
    }

    printHeader("Closing Zoo");
    for (int d = 0; d < 20; d++)
    {
        std::cout << RED "LayingAnimalZoo[" << (d + 1) << "]:" RESET << std::endl;
        delete zoo[d];
    }
}