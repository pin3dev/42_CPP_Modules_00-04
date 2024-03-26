/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:15 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:46:30 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	print_header(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}
int main()
{
	print_header("Canonical Form DiamondTrap");
	
	DiamondTrap none4;
	DiamondTrap everyb("EVERYB");
	DiamondTrap together("TOGETHER");

	together.takeDamage(99);

	DiamondTrap copy_together(together);
	copy_together.attack("TEST_COPY_TOGETHER");
	together.attack("TEST_ORIG");
	everyb.attack("TEST_ORIG");
	DiamondTrap copy_everyb;
	copy_everyb = everyb;
	copy_everyb.attack("TEST_COPY_EVERYB");

	print_header("Additional Members Function FragTrap");

	everyb.attack("TEST_ORIG");
	everyb.attack("TEST_ORIG");
	everyb.takeDamage(100);
	everyb.attack("TEST_ORIG");
	everyb.beRepaired(20);
	together.beRepaired(99);
	together.takeDamage(99);
	together.attack("TEST_ORIG");
	copy_together.attack("TEST_COPY_TOGETHER");
	none4.beRepaired(99);
	none4.takeDamage(100);
	none4.attack("TEST_ORIG");

	everyb.whoAmi();
	together.whoAmi();
	copy_together.whoAmi();
	copy_everyb.whoAmi();
}
