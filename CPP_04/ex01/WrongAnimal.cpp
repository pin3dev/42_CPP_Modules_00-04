/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:10:11 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/25 14:52:04 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
WrongAnimal::WrongAnimal() : _type("DefaultWrongAnimal")
{
	std::cout << BKGRAY "[WRONG_ANIMAL] Default constructor called" RESET << std::endl;
}
// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout <<  BKGRAY "[WRONG_ANIMAL] Copy constructor called"  << this->getType() + RESET << std::endl;
}
// Adicional member functions: Constructor with param
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << BKGRAY "[WRONG_ANIMAL] Constructor called to  " << this->getType() + RESET << std::endl;
}
// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout <<  BKGRAY "[WRONG_ANIMAL] Destructor called to "  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout <<  BKGRAY "[WRONG_ANIMAL] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/***************************
	        Getters
****************************/


std::string		WrongAnimal::getType() const
{
	return (this->_type);
}

/***************************
Adicional member functions
****************************/

void	WrongAnimal::makeSound() const
{
	std::cout <<  YELLOW "[WRONG_ANIMAL] some sound..." RESET << std::endl;
}
