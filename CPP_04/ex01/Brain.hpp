/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:48:34 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/26 08:54:55 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define RED    "\x1b[1;31m"
#define GRAY  "\x1b[37m"
#define MAGENTA "\x1b[35m"
#define BKGRAY	"\x1b[47;90m"
//#define CYAN    "\x1b[1;36m"

#include "Animal.hpp"

class Brain
{
	private:
		//Aditional Member
		std::string	_ideas[100];
	public:
		//Canonical Form
		Brain();
		Brain(std::string idea); //Adicional Function Member
		Brain &operator=(const Brain &src);
		Brain(const Brain &src);
		~Brain();
		//Getter
		std::string getIdea() const;

};

#endif