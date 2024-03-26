/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:33:29 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/29 09:15:22 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iomanip>

void	print_header(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}

int main()
{
    print_header("Animal Test");
    const Animal* def_animal = new Animal();
    const Animal* animal_dog = new Dog();
    const Animal* animal_cat = new Cat();

    std::cout << def_animal ->getType() << " ";
    def_animal ->makeSound();
    std::cout << animal_dog ->getType() << " ";
    animal_dog->makeSound();
    std::cout << animal_cat->getType() << " ";
    animal_cat->makeSound();

    delete def_animal;
    delete animal_dog;
    delete animal_cat;

    print_header("WrongAnimal Test");
    const WrongAnimal* def_Wanimal = new WrongAnimal();
    const WrongAnimal* Wanimal_cat = new WrongCat();

    std::cout << def_Wanimal ->getType() << " ";
    def_Wanimal ->makeSound();
    std::cout << Wanimal_cat ->getType() << " ";
    Wanimal_cat->makeSound();

    delete def_Wanimal;
    delete Wanimal_cat;
}