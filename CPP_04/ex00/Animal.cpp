/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:33:50 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 08:28:02 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
Animal::Animal() : _type("DefaultAnimal")
{
	std::cout << BKGRAY "[ANIMAL] Default constructor called" RESET << std::endl;
}
// Adicional member functions: Constructor with param
Animal::Animal(std::string type) : _type(type)
{
	std::cout << BKGRAY "[ANIMAL] Constructor called to  " << this->getType() + RESET << std::endl;
}
// Copy constructor
Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout <<  BKGRAY "[ANIMAL] Copy constructor called"  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
Animal &Animal::operator=(const Animal &src)
{
	std::cout <<  BKGRAY "[ANIMAL] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}
// Destructor
Animal::~Animal()
{
	std::cout <<  BKGRAY "[ANIMAL] Destructor called to "  << this->getType() + RESET << std::endl;
}

/***************************
	        Getters
****************************/


std::string		Animal::getType() const
{
	return (this->_type);
}

/***************************
Adicional member functions
****************************/

void	Animal::makeSound() const
{
	std::cout <<  RED "[ANIMAL] animal sound..." RESET << std::endl;
}