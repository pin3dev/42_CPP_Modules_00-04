/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:35:03 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 08:43:47 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
Dog::Dog() : Animal("Dog")
{
	std::cout << BKGRAY "[DOG] Default constructor called" RESET << std::endl;
}
// Copy constructor
Dog::Dog(const Dog &src)
{
	this->_type = src._type;
	std::cout <<  BKGRAY "[DOG] Copy constructor called"  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
Dog &Dog::operator=(const Dog &src)
{
	std::cout <<  BKGRAY "[DOG] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}
// Destructor
Dog::~Dog()
{
	std::cout <<  BKGRAY "[DOG] Destructor called to "  << this->getType() + RESET << std::endl;
}

/***************************
Adicional member functions
****************************/

void	Dog::makeSound() const
{
	std::cout << GREEN "[DOG]:🐶au au..." RESET << std::endl;
}
