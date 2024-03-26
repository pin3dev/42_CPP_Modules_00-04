/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:19:47 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 11:30:13 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/***************************
	* Canonical form *		
****************************/

// Default constructor
AMateria::AMateria() : _type("DefaultType")
{
	//std::cout << BKGRAY "[A_MATERIA] Default constructor called" RESET << std::endl;
}
// Copy constructor
AMateria::AMateria(const AMateria &src) : _type(src._type)
{
	//std::cout << BKGRAY "[A_MATERIA] Constructor Called" RESET << std::endl;
}
// Adicional member functions: Constructor with param
AMateria::AMateria(std::string const &type) : _type(type)
{
	//std::cout << BKGRAY "[A_MATERIAL] Constructor called to  " << this->getType() + RESET << std::endl;
}
//Destructor
AMateria::~AMateria()
{
	//std::cout <<  BKGRAY "[A_MATERIAL] Destructor called to "  << this->getType() + RESET << std::endl;
}
// Copy assignment operator: Selective Overload Operator
AMateria &AMateria::operator=(const AMateria &src)
{
	//std::cout << BKGRAY "[A_MATERIA] Copy assignment operator called" RESET << std::endl;
	(void)src;
	return (*this);
}

/***************************
		* Getters *			
****************************/

std::string const &AMateria::getType() const
{
	return (this->_type);
}

/***************************
Adicional member functions
****************************/

void AMateria::use(ICharacter& target)
{
	(void)target;
	//std::cout <<  BKGRAY "* nothing to use on target *" RESET << std::endl;
}