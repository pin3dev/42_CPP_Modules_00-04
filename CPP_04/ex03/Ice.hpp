/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:27:32 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/31 12:01:03 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#include "AMateria.hpp"

class Ice : public AMateria
{		
	public :
		//Canonical Form
		Ice();
		Ice(Ice &src);
		Ice &operator=(const Ice &src);
		~Ice();

		//Aditional Function Member
		AMateria* clone() const; //Aditional Abstract Functions Members Implemantation
		void use(ICharacter& target);
};

#endif