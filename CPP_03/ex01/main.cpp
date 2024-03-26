/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:06 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:55:20 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	print_header(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}
int main()
{
	print_header("Canonical Form ScavTrap");
	
	ScavTrap none2;
	ScavTrap vanessa("VANESSA");
	ScavTrap george("GEORGE");

	george.takeDamage(99);

	ScavTrap copy_george(george);
	copy_george.attack("TEST_COPY_GEORGE");
	george.attack("TEST_ORIG");
	vanessa.attack("TEST_ORIG");
	ScavTrap copy_vanessa;
	copy_vanessa = vanessa;
	copy_vanessa.attack("TEST_COPY_VANESSA");

	print_header("Additional Members Function ScavTrap");

	vanessa.attack("TEST_ORIG");
	vanessa.attack("TEST_ORIG");
	vanessa.takeDamage(100);
	vanessa.attack("TEST_ORIG");
	vanessa.beRepaired(20);
	george.beRepaired(99);
	george.takeDamage(99);
	george.attack("TEST_ORIG");
	copy_george.attack("TEST_COPY_GEORGE");
	none2.beRepaired(99);
	none2.takeDamage(100);
	none2.attack("TEST_ORIG");

	vanessa.GuardGate();
	george.GuardGate();
	copy_george.GuardGate();
	copy_vanessa.GuardGate();
}
