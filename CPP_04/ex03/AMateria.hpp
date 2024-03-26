/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:33:42 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/31 12:35:03 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

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

#include "ICharacter.hpp"

class AMateria
{
	protected :
		std::string	_type;
	public:
        //Canonical Form
		AMateria();
		AMateria(std::string const &type); //Aditional Function Member: Constructor with Param
		AMateria(const AMateria &src);
		virtual AMateria &operator=(const AMateria &src); //Selective Overload Operator
		virtual ~AMateria();
        
        //Getter
        std::string const &getType() const;

        //Aditional Function Member
        virtual AMateria* clone() const = 0; //Abstract Function
		virtual void use(ICharacter& target);
};

#endif