/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:42:13 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:55:12 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	print_header(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}
int main()
{
	print_header("Canonical Form ClapTrap");
  	
	ClapTrap none;
	ClapTrap iva("IVA");
	ClapTrap clara("CLARA");

	clara.takeDamage(9);

	ClapTrap copy_clara(clara);
	copy_clara.attack("TEST_COPY_CLARA");
	clara.attack("TEST_ORIG");
	iva.attack("TEST_ORIG");
	ClapTrap copy_iva;
	copy_iva = iva;
	copy_iva.attack("TEST_COPY_IVA");
	
	print_header("Additional Members Function ClapTrap");

	iva.attack("TEST_ORIG");
	iva.attack("TEST_ORIG");
	iva.takeDamage(10);
	iva.attack("TEST_ORIG");
	iva.beRepaired(10);
	clara.beRepaired(9);
	clara.takeDamage(10);
	clara.attack("TEST_ORIG");
	copy_clara.attack("TEST_COPY_CLARA");
	none.beRepaired(10);
	none.takeDamage(20);
	none.attack("TEST_ORIG");
}
