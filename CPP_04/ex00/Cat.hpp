/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:42:18 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/25 14:39:51 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		//Canonical Form
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		~Cat();
		//Adicional Function Member
		void	makeSound() const; 
};

#endif