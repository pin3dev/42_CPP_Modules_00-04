/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:45:42 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:56:31 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

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

class FragTrap : public ClapTrap
{
	public :
	    //Canonical form
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &src);
		
    	//Adicional member functions
		FragTrap(std::string name);
		void highFivesGuys(void);
		
		private :
		//Utils functions to highFivesGuys
		void		funct_err_msg_FT(short int action) const;
		void		funct_sucess_msg_FT(short int act, std::string t, int p) const;
		void		debbug_msg_FT(std::string act, std::string st) const;
};

# endif