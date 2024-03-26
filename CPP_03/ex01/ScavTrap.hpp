/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:20 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:46:50 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>



#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#define ATK 1
#define REP 2
#define DAM 3
#define ADD 4
#define KO 0
#define OK 1

class ScavTrap : public ClapTrap
{
	public :
	    //Canonical form
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);
		
    	//Adicional member functions
		ScavTrap(std::string name);
		void attack(const std::string &target);
		void GuardGate(void);
		
		private :
		//Utils functions to Attack & GuardGate
		short int   get_status_ST(void) const;
		short int	error_msg_ST(short int status) const;
		void		funct_err_msg_ST(short int action) const;
		void		funct_sucess_msg_ST(short int act, std::string t, int p) const;
		void		debbug_msg_ST(std::string act, std::string st) const;
};

# endif