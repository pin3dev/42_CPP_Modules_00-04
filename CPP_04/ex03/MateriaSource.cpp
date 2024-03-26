/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:26:04 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 11:37:38 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/***************************
	* Canonical form *
****************************/

// Default constructor
MateriaSource::MateriaSource()
{
	//std::cout << BKGRAY "[MATERIAL_SOURCE] Default constructor called" RESET << std::endl;
	this->initSlots();
}
// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &src) 
{
	//std::cout << BKGRAY "[MATERIAL_SOURCE] Copy constructor called to " << this->getType() + RESET << std::endl;
	this->initSlots();
	for (int i = 0; i < 4 ; i++)
	{
		if (src._slot[i] != NULL)
			this->_slot[i] = src._slot[i]->clone();
	}
}
//Destructor
MateriaSource::~MateriaSource()
{
	//std::cout <<  BKGRAY "[MATERIAL_SOURCE] Destructor called to "  << this->getType() + RESET << std::endl;
	this->clearSlots();
}

// Copy assignment operator
MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	//std::cout << BKGRAY "[MATERIAL_SOURCE] Copy assignment operator called" RESET << std::endl;
	if (this != &src)
	{
		this->clearSlots();
		for (int i = 0; i < 4; i++)
		{
			if (src._slot[i] != NULL)
				this->_slot[i] = src._slot[i]->clone();
		}
	}
	return (*this);
}

/***************************
		* 	Getters *		
****************************/

std::string MateriaSource::getMatType(int idx) const
{
	if(_slot[idx] != NULL)
		return (this->_slot[idx]->getType());
	return (RED "Without materia" RESET);
}

/***************************
	* Utility functions *
****************************/

void MateriaSource::initSlots()
{
	for (int i = 0; i < 4 ; i++)
		this->_slot[i] = NULL;
}

void MateriaSource::clearSlots()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_slot[i] != NULL)
		{
			delete (this->_slot[i]);
			this->_slot[i] = NULL;
		}
	}
}

/***************************
Adicional member functions
****************************/

void	MateriaSource::learnMateria(AMateria *src)
{
	bool learned;
	learned = false;

	if (src == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = src->clone();
			learned = true;
			delete src;
			break;
		}
	}
	if (!learned)
	{
		delete src;
		src = NULL;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type.empty())
		return (NULL);
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] && _slot[i]->getType() == type)
			return (_slot[i]->clone());
	}
	return (NULL);
}