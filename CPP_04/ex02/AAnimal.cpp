/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:59:22 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/25 15:01:34 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
AAnimal::AAnimal() : _type("DefaultA_Animal")
{
	std::cout << BKGRAY "[A_ANIMAL] Default constructor called" RESET << std::endl;
}
// Copy constructor
AAnimal::AAnimal(const AAnimal &src) : _type(src._type)
{
	std::cout <<  BKGRAY "[A_ANIMAL] Copy constructor called to "  << this->getType() + RESET << std::endl;
}
// Adicional member functions: Constructor with param
AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << BKGRAY "[A_ANIMAL] Constructor called to  " << this->getType() + RESET << std::endl;
}
// Destructor
AAnimal::~AAnimal()
{
	std::cout <<  BKGRAY "[A_ANIMAL] Destructor called to "  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout <<  BKGRAY "[A_ANIMAL] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/***************************
	        Getters
****************************/


std::string		AAnimal::getType() const
{
	return (this->_type);
}