/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:15:00 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 08:26:15 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << BKGRAY "[WRONGCAT] Default constructor called" RESET << std::endl;
}
// Copy constructor
WrongCat::WrongCat(const WrongCat &src)
{
	this->_type = src._type;
	std::cout <<  BKGRAY "[WRONGCAT] Copy constructor called"  << this->getType() + RESET << std::endl;
}
// Copy assignment operator
WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout <<  BKGRAY "[WRONGCAT] Copy assignment operator called to "  << this->getType() + RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}
// Destructor
WrongCat::~WrongCat()
{
	std::cout <<  BKGRAY "[WRONGCAT] Destructor called to "  << this->getType() + RESET << std::endl;
}


/***************************
Adicional member functions
****************************/

void	WrongCat::makeSound() const
{
	std::cout << "[WRONGCAT]: 🐱meaw?"  << std::endl;
}