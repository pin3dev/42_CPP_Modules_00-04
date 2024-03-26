/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:35 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 09:21:06 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
Cat::Cat() : Animal("Cat")
{
	_myBrain = new Brain("[CAT] Let 🐱meooooooout...");
	std::cout << BKGRAY "[CAT] Default constructor called" RESET << std::endl;
}
// Copy constructor
Cat::Cat(const Cat &src) : Animal(src)
{
	_myBrain = new Brain(*src._myBrain);
	this->_type = src._type;
	std::cout <<  BKGRAY "[CAT] Copy constructor called to "  << this->getType() + RESET << std::endl;
}
// Destructor
Cat::~Cat()
{
	delete	_myBrain;
	std::cout <<  BKGRAY "[CAT] Destructor called to "  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
Cat &Cat::operator=(const Cat &src)
{
	std::cout <<  BKGRAY "[CAT] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	
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


std::string		Cat::getBrainIdea() const
{
	return (_myBrain->getIdea());
}

/***************************
Adicional member functions
****************************/

void	Cat::makeSound() const
{
	std::cout << GREEN "[CAT]: 🐱meaaaaaaaaw..." RESET << std::endl;
}
