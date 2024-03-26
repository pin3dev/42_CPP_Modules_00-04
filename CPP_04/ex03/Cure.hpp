/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:27:47 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/31 12:00:53 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		//Canonical Form
		Cure( void );
		Cure(Cure &copy);
		Cure &operator=(const Cure &b);
		~Cure();
				
		//Aditional Function Member
		AMateria* clone() const; //Aditional Abstract Functions Members Implemantation
		void use(ICharacter& target);
};

#endif