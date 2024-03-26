/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:46 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:46:44 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	print_header(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}
int main()
{
	print_header("Canonical Form FragTrap");
	
	FragTrap none3;
	FragTrap lelis("LELIS");
	FragTrap mari("MARI");

	mari.takeDamage(99);

	FragTrap copy_mari(mari);
	copy_mari.attack("TEST_COPY_MARI");
	mari.attack("TEST_ORIG");
	lelis.attack("TEST_ORIG");
	FragTrap copy_lelis;
	copy_lelis = lelis;
	copy_lelis.attack("TEST_COPY_LELIS");

	print_header("Additional Members Function FragTrap");

	lelis.attack("TEST_ORIG");
	lelis.attack("TEST_ORIG");
	lelis.takeDamage(100);
	lelis.attack("TEST_ORIG");
	lelis.beRepaired(20);
	mari.beRepaired(99);
	mari.takeDamage(99);
	mari.attack("TEST_ORIG");
	copy_mari.attack("TEST_COPY_MARI");
	none3.beRepaired(99);
	none3.takeDamage(100);
	none3.attack("TEST_ORIG");

	lelis.highFivesGuys();
	mari.highFivesGuys();
	copy_mari.highFivesGuys();
	copy_lelis.highFivesGuys();
}
