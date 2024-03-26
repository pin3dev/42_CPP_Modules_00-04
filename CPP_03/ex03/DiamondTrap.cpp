/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:05 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:57:22 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/***************************
	Canonical form
****************************/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->_name = "default";
	this->_hit = FragTrap::_hit;
	this->_energy = 50;
	this->_damage = FragTrap::_damage;
	std::cout << BKGRAY "[DiamondTrap] Default constructor called" RESET << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = 50;
	this->_damage = FragTrap::_damage;
	std::cout << BKGRAY "[DiamondTrap] Constructor called to " << this->get_name_DT() + RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    this->_name = src.get_name_DT();
    this->_hit = src.get_hit();
    this->_energy = src.get_energy();
    this->_damage = src.get_damage();
	std::cout << BKGRAY "[DiamondTrap] Copy constructor called to " << this->get_name_DT() + RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BKGRAY "[DiamondTrap] Destructor called to " << this->get_name_DT() + RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
        this->_name = src.get_name_DT();
        this->_hit = src.get_hit();
        this->_energy = src.get_energy();
        this->_damage = src.get_damage();
    }
	std::cout << BKGRAY "[DiamondTrap] Copy assignment operator called to " << this->get_name_DT() + RESET << std::endl;
	return (*this);
}

/***************************
	        Getters
****************************/

std::string	DiamondTrap::get_name_DT() const
{
    return (DiamondTrap::_name);
}

/***************************
            Utils
****************************/

// Prints full status of instance that call the action (attack, TakeDamage, beRepaired)
void	DiamondTrap::debbug_msg_DT(std::string act, std::string st) const
{
    std::cout << MAGENTA "DiamondTrap" RESET << std::setw(15)
    << act  << std::setw(15) 
	<< this->get_name_DT() << std::setw(1) 
	<< " | " << std::setw(5) << "Hit: " << this->get_hit()
    << " | " << std::setw(5) << "Energy: " << this->get_energy()
    << " | " << std::setw(5) << "Damage: " << this->get_damage()
    << " | " << std::setw(5) << st
	<< " | " << std::endl;
}

// Prints error mensages for each function
void    DiamondTrap::funct_err_msg_DT(short int action) const
{
    switch (action)
    {
        case ADD:
            debbug_msg_DT("[ whoAmi ]", (RED "FAIL" RESET));
            std::cout << RED "DiamondTrap \"" << this->get_name() << "\" is already dead.\n" RESET;
            break;
    }
}
// Prints succes mensages for each function
void		DiamondTrap::funct_sucess_msg_DT(short int act, std::string t, int p) const
{
    (void)p;
    switch (act)
    {
        case ADD:
            debbug_msg_DT("[ whoAmi ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ClapTrapTrap name is the \"" << this->get_name() << "\"\n" RESET;
            std::cout << GREEN "DiamondTrap name is the \"" << t << "\"\n" RESET;
            break;
    }
}

/***************************
Adicional member functions
****************************/

void    DiamondTrap::whoAmi(void)
{
    debbug_msg_DT("[ whoAmi ]", (YELLOW "RUNNING..." RESET));
    if(this->get_hit() == 0)
    {
        this->funct_err_msg_DT(ADD);
        return;
    }
    this->funct_sucess_msg_DT(ADD, this->get_name_DT(), 0);
}