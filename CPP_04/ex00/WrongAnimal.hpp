/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:10:06 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/25 14:41:06 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal
{
	protected :
		std::string _type;
	public:
        //Canonical Form
		WrongAnimal();
		WrongAnimal(std::string type); //Adicitonal Member Function
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		~WrongAnimal();
        //Getter
		std::string		getType() const;
		//Adicitonal Member Function
        void makeSound() const;
};

# endif