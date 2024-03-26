/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:08 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:57:32 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <iomanip>
#include <string>

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

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
	public :
	    //Canonical form
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		
    	//Adicional member functions
		DiamondTrap(std::string name);
		void    whoAmi(void);
        using   ScavTrap::attack;
		
		//Getter
		std::string	get_name_DT()const;

		private :
		//Utils functions to whoAmi
		void		funct_err_msg_DT(short int action) const;
		void		funct_sucess_msg_DT(short int act, std::string t, int p) const;
		void		debbug_msg_DT(std::string act, std::string st) const;
};

# endif