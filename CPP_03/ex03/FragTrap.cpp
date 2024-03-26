/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:10 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:58:03 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/***************************
	Canonical form
****************************/

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << BKGRAY "[FragTrap] Default constructor called" RESET << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << BKGRAY "[FragTrap] Constructor called to " << this->get_name() + RESET  << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << BKGRAY "[FragTrap] Copy constructor called to " << this->get_name() + RESET  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << BKGRAY "[FragTrap] Destructor called to " << this->get_name() + RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << BKGRAY "[FragTrap] Copy assignment operator called to " << this->get_name() + RESET << std::endl;
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

// Prints full status of instance that call the action (attack, TakeDamage, beRepaired)
void	FragTrap::debbug_msg_FT(std::string act, std::string st) const
{
    std::cout << MAGENTA "FragTrap" RESET << std::setw(15)
    << act  << std::setw(15) 
	<< this->get_name() << std::setw(1) 
	<< " | " << std::setw(5) << "Hit: " << this->get_hit()
    << " | " << std::setw(5) << "Energy: " << this->get_energy()
    << " | " << std::setw(5) << "Damage: " << this->get_damage()
    << " | " << std::setw(5) << st
	<< " | " << std::endl;
}

// Prints error mensages for each function
void    FragTrap::funct_err_msg_FT(short int action) const
{
    switch (action)
    {
        case ADD:
            debbug_msg_FT("[ high5 ]", (RED "FAIL" RESET));
            std::cout << RED "FragTrap \"" << this->get_name() << "\" is already dead.\n" RESET;
            break;
    }
}
// Prints succes mensages for each function
void		FragTrap::funct_sucess_msg_FT(short int act, std::string t, int p) const
{
    (void)p;
    switch (act)
    {
        case ADD:
            debbug_msg_FT("[ high5 ]", (GREEN "SUCCESS" RESET));
            std::cout << GREEN "FragTrap \"" << t << "\" raised its hand to highFive\n" RESET;
            break;
    }
}

/***************************
Adicional member functions
****************************/

void    FragTrap::highFivesGuys(void)
{
    debbug_msg_FT("[ high5 ]", (YELLOW "RUNNING..." RESET));
    if(this->get_hit() == 0)
    {
        this->funct_err_msg_FT(ADD);
        return;
    }
    this->funct_sucess_msg_FT(ADD, this->get_name(), 0);
}