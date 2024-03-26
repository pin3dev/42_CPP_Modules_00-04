/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:15 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:55:38 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/***************************
	Canonical form
****************************/

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << BKGRAY "[ScavTrap] Default constructor called" RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << BKGRAY "[ScavTrap] Constructor called to " << this->get_name() + RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << BKGRAY "[ScavTrap] Copy constructor called to " << this->get_name() + RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << BKGRAY "[ScavTrap] Destructor called to " << this->get_name() + RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << BKGRAY "[ScavTrap] Copy assignment operator called to " << this->get_name() + RESET << std::endl;
	if (this != &src)
	{
        this->_name = src.get_name();
        this->_hit = src.get_hit();
        this->_energy = src.get_energy();
        this->_damage = src.get_damage();
    }
	return (*this);
}

/***************************
            Utils
****************************/

// Checks if the currently instance have enought value of _hit or _energy, returning a status
short int   ScavTrap::get_status_ST() const
{
    if (this->get_hit() <= 0)
        return (error_msg_ST(-1));
    if (this->get_energy() <= 0)
        return (error_msg_ST(-2));
    return (OK);
}
// Prints error mensage about the passed status
short int   ScavTrap::error_msg_ST(short int st) const
{
    std::cout << YELLOW;
    switch (st)
    {
        case -1:
            std::cout << "ScavTrap \""
            << this->get_name()
            << "\" is dead!";
            break;
        case -2:
            std::cout << "ScavTrap \""
            << this->get_name()
            << "\" without energy!";
            break;
    }
    std::cout << RESET << std::endl;  
    return (KO);
}

// Prints full status of instance that call the action (attack, TakeDamage, beRepaired)
void	ScavTrap::debbug_msg_ST(std::string act, std::string st) const
{
    std::cout << MAGENTA "ScavTrap" RESET << std::setw(15)
    << act  << std::setw(15) 
	<< this->get_name() << std::setw(1) 
	<< " | " << std::setw(5) << "Hit: " << this->get_hit()
    << " | " << std::setw(5) << "Energy: " << this->get_energy()
    << " | " << std::setw(5) << "Damage: " << this->get_damage()
    << " | " << std::setw(5) << st
	<< " | " << std::endl;
}

// Prints error mensages for each function
void    ScavTrap::funct_err_msg_ST(short int action) const
{
    switch (action)
    {
        case ATK:
            debbug_msg_ST("[ attack ]", (RED "FAIL" RESET));
            std::cout << RED "ScavTrap \"" << this->get_name() << "\" is unable to attack!\n" RESET;
            break;
        case ADD:
            debbug_msg_ST("[ GuardGate ]", (RED "FAIL" RESET));
            std::cout << RED "ScavTrap \"" << this->get_name() << "\" is already dead.\n" RESET;
            break;
    }
}
// Prints succes mensages for each function
void		ScavTrap::funct_sucess_msg_ST(short int act, std::string t, int p) const
{
    switch (act)
    {
        case ATK:
            debbug_msg_ST("[ attack ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ScavTrap \"" << this->get_name() << "\" attacks " << t << " causing " << p << " point of damage.\n" RESET;
            break;
        case ADD:
            debbug_msg_ST("[ GuardGate ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ScavTrap \"" << t << "\" is in Gate keeper mode\n" RESET;
            break;
    }
}


/***************************
Adicional member functions
****************************/

void	ScavTrap::attack(const std::string &target)
{
    debbug_msg_ST("[ attack ]", (YELLOW "RUNNING..." RESET));
    if(!this->get_status_ST())
    {
        this->funct_err_msg_ST(ATK);
        return ;
    }
    this->_energy--;

    this->funct_sucess_msg_ST(ATK, target, this->get_damage());
}

void    ScavTrap::GuardGate(void)
{
    debbug_msg_ST("[ GuardGate ]", (YELLOW "RUNNING..." RESET));
    if(this->get_hit() == 0)
    {
        this->funct_err_msg_ST(ADD);
        return;
    }
    this->funct_sucess_msg_ST(ADD, this->get_name(), 0);
}