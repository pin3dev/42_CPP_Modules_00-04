/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:37:57 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 08:17:15 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#include <string>
#include <iostream>

class Animal
{
	protected :
		std::string	_type;
	public :
		//Canonical Form
		Animal();
		Animal(std::string type); //Adicional Function Member: Constructor with Param
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();
		//Getter
        std::string		getType() const;
		//Adicional Function Member
        virtual void makeSound() const ;
};

# endif