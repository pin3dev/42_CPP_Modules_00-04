/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:28:08 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 10:41:59 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

/***************************
	  * Canonical form * 	
****************************/

// Default constructor
Cure::Cure() : AMateria("cure")
{
	//std::cout << BKGRAY "[CURE] Default constructor called" RESET << std::endl;
}
// Copy constructor
Cure::Cure(Cure &src) : AMateria(src)
{
	//std::cout << BKGRAY "[CURE] Copy Constructor Called" RESET << std::endl;
}
// Copy assignment operator
Cure &Cure::operator=(const Cure &src)
{
	//std::cout << BKGRAY "[CURE] Copy assignment operator called" RESET << std::endl;
	if (this != &src)
	{
		this->AMateria::operator=(src);
		this->_type = src._type;
	}
	return (*this);
} 

//Destructor
Cure::~Cure()
{
	//std::cout <<  BKGRAY "[CURE] Destructor called to "  << this->getType() + RESET << std::endl;
}

/***************************
Adicional member functions
****************************/

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
