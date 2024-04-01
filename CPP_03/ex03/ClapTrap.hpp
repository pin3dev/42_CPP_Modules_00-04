/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:03 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/22 18:46:37 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
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
#define KO 0
#define OK 1

class ClapTrap
{
	protected :
		std::string	_name;
		int	_hit;
		int	_energy;
		int	_damage;
	public :
		//Canonical form
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap &operator=(const ClapTrap &src);
		virtual ~ClapTrap();
		
		//Adicional member functions
		ClapTrap(std::string name);
        virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//Getters & Setters
		int	get_hit()const;
		int	get_energy()const;
		int	get_damage()const;
		std::string	get_name()const;

	protected :
		//Utils functions to attack, takeDamage & beRepaired
		short int	get_status() const;
		short int	error_msg(short int status) const;
		void		funct_err_msg(short int action) const;
		void		funct_sucess_msg(short int act, std::string t, int p) const;
		void		debbug_msg(std::string act, std::string st) const;
};

# endif
