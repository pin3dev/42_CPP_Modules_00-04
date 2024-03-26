/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:24:19 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 11:58:12 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter
{
	private :
		AMateria		*_inv[4];
		AMateria		*_floor;
		std::string		_name;
	public :
		//Canonical Form
		Character();
		Character(std::string name); //Aditional Function Member: Constructor with Param
		Character(Character &src);
		Character &operator=(const Character &src);
		~Character();
		
		//Aditional Interface Mandatory Functions Members
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		//Getters
		std::string const &getName()const;

		
	private :
		//Utility Functions
		bool 	checkMat(int idx) const;
		void	initInventory(void);
		void	clearInventory(void);
		void	leaveMatOnTFloor(AMateria *m);
};

#endif