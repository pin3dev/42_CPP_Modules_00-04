/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:28:31 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/31 19:02:24 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/***************************
	 * Canonical form *		
****************************/

// Default constructor
Ice::Ice() : AMateria("ice")
{
	//std::cout << BKGRAY "[ICE] Default constructor called" RESET << std::endl;
}
// Copy constructor
Ice::Ice(Ice &src) : AMateria(src)
{
	//std::cout << BKGRAY "[ICE] Copy Constructor Called" RESET << std::endl;
}
// Copy assignment operator
Ice &Ice::operator=(const Ice &src)
{
	//std::cout << BKGRAY "[ICE] Copy assignment operator called" RESET << std::endl;
	if (this != &src)
	{
		this->AMateria::operator=(src);
		this->_type = src._type;
	}
	return (*this);
} 
//Destructor
Ice::~Ice()
{
	//std::cout <<  BKGRAY "[ICE] Destructor called to "  << this->getType() + RESET << std::endl;
}

/***************************
Adicional member functions
****************************/

AMateria* Ice::clone() const
{
	return (new Ice());
}
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}