/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:37:57 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/25 14:59:45 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AAnimal_HPP
# define AAnimal_HPP

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

class AAnimal
{
	protected :
		std::string	_type;
	public :
		//Canonical Form
		AAnimal();
		AAnimal(std::string type); //Adicional Function Member
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		//Getter
        std::string		getType() const;
		//Adicional Abstract Function Member 
        virtual void makeSound() const = 0;
};

# endif