/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:35:03 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 09:21:21 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
Dog::Dog() : Animal ("Dog")
{
	_myBrain = new Brain("[DOG] Let me 🐶Out Out...");
	this->_type = "Dog";
	std::cout << BKGRAY "[DOG] Default constructor called" RESET << std::endl;
}
// Copy constructor
Dog::Dog(const Dog &src) : Animal(src)
{
	_myBrain = new Brain(*src._myBrain);
	this->_type = src._type;
	std::cout <<  BKGRAY "[DOG] Copy constructor called to "  << this->getType() + RESET << std::endl;
}
// Destructor
Dog::~Dog()
{
	delete	_myBrain;
	std::cout <<  BKGRAY "[DOG] Destructor called to "  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
Dog &Dog::operator=(const Dog &src)
{
	std::cout <<  BKGRAY "[DOG] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
	{
		delete	_myBrain;
		_myBrain = new Brain(*src._myBrain);
		this->_type = src._type;
	}
	return (*this);
}

/***************************
	        Getters
****************************/


std::string		Dog::getBrainIdea() const
{
	return (_myBrain->getIdea());
}


/***************************
Adicional member functions
****************************/

void	Dog::makeSound() const
{
	std::cout << GREEN "[DOG]:🐶au au..." RESET << std::endl;
}
