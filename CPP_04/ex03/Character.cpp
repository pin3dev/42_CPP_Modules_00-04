/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:33:16 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 12:38:01 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***************************
	 * Canonical form *		
****************************/

// Default constructor
Character::Character() : _name("DefaultName")
{
	//std::cout << BKGRAY "[CHARACTER] Default constructor called" RESET << std::endl;
	this->initInventory();
}
// Copy constructor
Character::Character(Character &src) : _name(src._name)
{
	//std::cout << BKGRAY "[CHARACTER] Copy constructor called to " << this->getName() + RESET << std::endl;
	this->initInventory();
	for (int i = 0; i < 4 ; i++)
	{
		if (src._inv[i] != NULL)
			this->_inv[i] = src._inv[i]->clone();
	}
	if (src._floor != NULL )
		this->_floor = src._floor->clone();
}
// Adicional member functions: Constructor with param
Character::Character(std::string name) : _name(name)
{
	//std::cout << BKGRAY "[CHARACTER] Constructor called to " << this->getName() + RESET << std::endl;
	this->initInventory();
}
//Destructor
Character::~Character()
{
	//std::cout <<  BKGRAY "[CHARACTER] Destructor called to " << this->getName() + RESET << std::endl;
	this->clearInventory();
}
// Copy assignment operator
Character &Character::operator=(const Character &src)
{
	//std::cout << BKGRAY "[CHARACTER] Copy assignment operator called to " << this->getName() + RESET << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->clearInventory();
		for (int i = 0; i < 4; i++)
		{
			if (src._inv[i] != NULL)
				this->_inv[i] = src._inv[i]->clone();
		}
		if (src._floor != NULL)
			this->_floor = src._floor->clone();
	}
	return (*this);
}

/***************************
		* 	Getters *		
****************************/

std::string const &Character::getName() const
{
	return (this->_name);
}

/***************************
Adicional member functions
****************************/

void Character::equip(AMateria* m)
{
	bool equiped;
	equiped = false;

	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			equiped = true;
			break ;
		}
	}
	if (!equiped)
	{
		delete m;
		m = NULL;
	}
}

void Character::unequip(int idx)
{
	if (!this->checkMat(idx))
	{
		std::cout << "Without Materia to Unequip" << std::endl;
		return ;
	}
	this->leaveMatOnTFloor(_inv[idx]);
	this->_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!this->checkMat(idx))
	{
		std::cout << RED "* Without Materia in Inventory to use at " << target.getName() << " *" RESET << std::endl;
		return ;
	}
	this->_inv[idx]->use(target);
}

/***************************
	* Utility functions *
****************************/

void Character::leaveMatOnTFloor(AMateria *m)
{
	if(this->_floor != NULL)
		delete this->_floor;
	this->_floor = m->clone();
	delete m;
}
void Character::initInventory()
{
	for (int i = 0; i < 4 ; i++)
		this->_inv[i] = NULL;
	this->_floor = NULL;
}

void Character::clearInventory()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->_inv[i] != NULL)
			delete (this->_inv[i]);
		this->_inv[i] = NULL;
	}
	if (this->_floor != NULL)
	{
		delete this->_floor;
		this->_floor = NULL;
	}
}

bool	Character::checkMat(int idx) const
{
	if (this->_inv[idx] != NULL && idx >= 0 && idx < 4)
		return (1);
	return (0);
}