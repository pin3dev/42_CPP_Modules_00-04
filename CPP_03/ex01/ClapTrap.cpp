/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:42:06 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 14:59:56 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/***************************
	Canonical form
****************************/

// Default constructor
ClapTrap::ClapTrap() : _name("default"), _hit(10), _energy(10), _damage(0)
{
	std::cout << BKGRAY "[ClapTrap] Default constructor called" RESET << std::endl;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name), _hit(src._hit), _energy(src._energy), _damage(src._damage)
{
    std::cout << BKGRAY "[ClapTrap] Copy constructor called to " << this->get_name() + RESET << std::endl;
	//*this = src;
}
// Adicional member functions: Constructor with name
ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _damage(0)
{
	std::cout << BKGRAY "[ClapTrap] Constructor called to " << this->get_name() + RESET  << std::endl;
}
// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << BKGRAY "[ClapTrap] Destructor called to " << this->get_name() + RESET << std::endl;
}
// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << BKGRAY "[ClapTrap] Copy assignment operator called to " << this->get_name() + RESET << std::endl;
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
	        Getters
****************************/

int ClapTrap::get_hit() const
{
    return (this->_hit);
}
int	ClapTrap::get_energy() const
{
    return (this->_energy);
}

int	ClapTrap::get_damage() const
{
    return (this->_damage);
}

std::string	ClapTrap::get_name() const
{
    return (this->_name);
}

/***************************
            Utils
****************************/

// Checks if the currently instance have enought value of _hit or _energy, returning a status
short int   ClapTrap::get_status() const
{
    if (this->get_hit() <= 0)
        return (error_msg(-1));
    if (this->get_energy() <= 0)
        return (error_msg(-2));
    return (OK);
}
// Prints error mensage about the passed status
short int   ClapTrap::error_msg(short int st) const
{
    std::cout << YELLOW;
    switch (st)
    {
        case -1:
            std::cout << "ClapTrap \""
            << this->get_name()
            << "\" is dead!";
            break;
        case -2:
            std::cout << "ClapTrap \""
            << this->get_name()
            << "\" without energy!";
            break;
    }
    std::cout << RESET << std::endl;  
    return (KO);
}

// Prints full status of instance that call the action (attack, TakeDamage, beRepaired)
void	ClapTrap::debbug_msg(std::string act, std::string st) const
{
    std::cout << "ClapTrap" << std::setw(15)
    << act  << std::setw(15) 
	<< this->get_name() << std::setw(1) 
	<< " | " << std::setw(5) << "Hit: " << this->get_hit()
    << " | " << std::setw(5) << "Energy: " << this->get_energy()
    << " | " << std::setw(5) << "Damage: " << this->get_damage()
    << " | " << std::setw(5) << st
	<< " | " << std::endl;
}

// Prints error mensages for each function
void    ClapTrap::funct_err_msg(short int action) const
{
    switch (action)
    {
        case ATK:
            debbug_msg("[ attack ]", (RED "FAIL" RESET));
            std::cout << RED "ClapTrap \"" << this->get_name() << "\" is unable to attack!\n" RESET;
            break;
        case REP:
            debbug_msg("[ beRepaired ]", (RED "FAIL" RESET));
            std::cout << RED "ClapTrap \"" << this->get_name() << "\" is unable to repair itself!\n" RESET;
            break;
        case DAM:
            debbug_msg("[ takeDamage ]", (RED "FAIL" RESET));
            std::cout << RED "ClapTrap \"" << this->get_name() << "\" is already dead.\n" RESET;
            break; 
    }
}
// Prints succes mensages for each function
void		ClapTrap::funct_sucess_msg(short int act, std::string t, int p) const
{
    switch (act)
    {
        case ATK:
            debbug_msg("[ attack ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ClapTrap \"" << this->get_name() << "\" attacks " << t << " causing " << p << " point of damage.\n" RESET;
            break;
        case REP:
            debbug_msg("[ beRepaired ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ClapTrap \"" << t << "\" repairs itself w/ " << p << " hit points.\n" RESET;
            break;
        case DAM:
            debbug_msg("[ takeDamage ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "ClapTrap \"" << t << "\" receives " << p << " damage.\n" RESET;
            break;  
    }
}


/***************************
Adicional member functions
****************************/

// Takes _energy points from instance to "attack" target
void	ClapTrap::attack(const std::string &target)
{
    debbug_msg("[ attack ]", (YELLOW "RUNNING..." RESET));
    if(!this->get_status())
    {
        this->funct_err_msg(ATK);
        return ;
    }
    this->_energy--;

    this->funct_sucess_msg(ATK, target, this->get_damage());
}
// Takes _hit points of instance
void	ClapTrap::takeDamage(unsigned int amount)
{
    debbug_msg("[ takeDamage ]", (YELLOW "RUNNING..." RESET));
    if(this->get_hit() == 0)
    {
        this->funct_err_msg(DAM);
        return ;
    }
    this->_hit -= amount;
    if (this->get_hit() < 0)
        this->_hit = 0;
    this->funct_sucess_msg(DAM, this->get_name(), amount);
}
// Fill _hit points of instance whit amount value
void	ClapTrap::beRepaired(unsigned int amount)
{
    debbug_msg("[ beRepaired ]", (YELLOW "RUNNING..." RESET));
    if(!this->get_status())
    {
        funct_err_msg(REP);
        return ;
    }
    this->_energy--;
    this->_hit += amount;

    this->funct_sucess_msg(REP, this->get_name(), amount);
}
