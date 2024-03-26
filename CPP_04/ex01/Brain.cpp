/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:49:33 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 09:22:16 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***************************
	Canonical Form
****************************/

// Default constructor
Brain::Brain()
{
	std::cout <<  BKGRAY "[BRAIN] Default constructor called" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "no thoughts";
}
// Copy constructor
Brain::Brain(const Brain &src)
{
	std::cout <<  BKGRAY "[BRAIN] Copy constructor called" RESET << std::endl;
	*this = src;
}
//Adicional Function Member: Constructor with param
Brain::Brain(std::string idea)
{
	std::cout << BKGRAY "[BRAIN] Constructor called" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}
// Destructor
Brain::~Brain( void )
{
	std::cout <<  BKGRAY "[BRAIN] Destructor called" RESET << std::endl;
}
// Copy assignment operator
Brain &Brain::operator=(const Brain &src)
{
	std::cout <<  BKGRAY "[BRAIN] Copy assignment operator called" RESET << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

/***************************
Adicional member functions
****************************/

std::string Brain::getIdea() const
{
	return (YELLOW + this->_ideas[0] + RESET);
}