/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:26:27 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 12:43:51 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iomanip>

static void	printHeader(std::string header)
{
	std::cout << std::setw(50) << MAGENTA "-----" << header << "-----" RESET << std::endl;
}


int main()
{
	printHeader("Testing MateriaSource & Interface");
		
		/* 
			<<<<<<<<<<<<<<<<<<< TEST INTERFACE >>>>>>>>>>>>>>>>>>>>
			Casting Interface pointer to contente of concrete class 
		*/
		IMateriaSource *m_src = new MateriaSource();

		m_src->learnMateria(new Ice());
		m_src->learnMateria(new Cure());

		MateriaSource mat_src = *dynamic_cast<MateriaSource*>(m_src); //Downcasting
		
		std::cout << YELLOW "<< Output Slots Materia Source [1] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + mat_src.getMatType(i) + RESET << std::endl;
 		
		/* 
			<<<<<<< TEST CONCRETE CLASS >>>>>>> 
			Assignment copy & Copy COnstructor 
		*/
		MateriaSource m_assig = mat_src;
		MateriaSource m_copy (m_assig);

 		/* std::cout << YELLOW "<< Output Slots Materia Source Copy [0] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + m_copy.getMatType(i) + RESET << std::endl;

		std::cout << YELLOW "<< Output Slots Materia Source Assignment [0] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + m_assig.getMatType(i) + RESET << std::endl; */
		
		m_copy.learnMateria(new Cure());
		m_assig.learnMateria(new Ice());

		std::cout << YELLOW "<< Output Slots Materia Source Copy [1] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + m_copy.getMatType(i) + RESET << std::endl;
		
		std::cout << YELLOW "<< Output Slots Materia Source Assignment [1] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + m_assig.getMatType(i) + RESET << std::endl;

		
		/* 
				<<<< TEST METHODS CLASS >>>> 
				Additional Functions Members
		*/
		m_copy.learnMateria(new Ice()); //Fill the last slot on the Materia Source Array
		m_copy.learnMateria(new Cure()); //Expected to be managed to avoid leaks
		m_copy.learnMateria(new Ice()); //Expected to be managed to avoid leaks

		std::cout << YELLOW "<< Output Slots Materia Source Copy [2] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
			std::cout << GREEN + m_copy.getMatType(i) + RESET << std::endl;

	printHeader("Testing AMateria, heirs && Characters && Interfaces");

		/* 
			<<<<<<<<<<<<<<<<<<< TEST INTERFACE >>>>>>>>>>>>>>>>>>> 
			Casting Interface pointer to contente of concrete class 
		*/
		ICharacter *me = new Character("Iva");
		ICharacter *you = new Character("Bob");
		AMateria *mat;

		Character iva = *dynamic_cast<Character*>(me); //Downcasting
		Character bob = *dynamic_cast<Character*>(you); //Downcasting

		/* std::cout << YELLOW "<< Output Inventory Materia to Use [0] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			iva.use(i, *you);
		} */
		
		
		/* 
				<<<< TEST METHODS CLASS >>>> 
				Additional Functions Members
		*/

		mat = m_src->createMateria("ice");
		me->equip(mat); // Equiped Ice on Invetory[0] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [1] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}

		me->equip(new Cure()); // Equiped Cure on Invetory[1] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [2] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}

		me->unequip(1); //Expected to be managed to avoid leaks | Unequiped Cure from Invetory[1] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [3] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}
	
		me->equip(m_copy.createMateria("ice")); // Equiped Ice on Invetory[1] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [4] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}

		me->equip(m_assig.createMateria("cure")); // Equiped Cure on Invetory[2] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [5] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}
		
		me->unequip(0); //Expected to be managed to avoid leaks | Unequiped Ice from Invetory[0] array position
		me->unequip(2); //Expected to be managed to avoid leaks | Unequiped Cure from Invetory[2] array position
		std::cout << YELLOW "<< Output Inventory Materia to Use [6] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}

		/* 
			<<<<<<< TEST CONCRETE CLASS >>>>>>> 
			Assignment copy & Copy COnstructor 
		*/

		mat = mat_src.createMateria("cure");
		me->equip(mat); // Equiped Cure on Invetory[0] array position
		mat = mat_src.createMateria("ice");
		me->equip(mat); // Equiped Ice on Invetory[2] array position
		mat = mat_src.createMateria("cure");
		me->equip(mat); // Equiped Cure on Invetory[3] array position
 		mat = mat_src.createMateria("ice");
		me->equip(mat); //Expected to be managed to avoid leaks
		std::cout << YELLOW "<< Output Inventory Materia to Use [7] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			me->use(i, *you);
		}

		iva = *dynamic_cast<Character*>(me); //Downcasting
		bob = iva;
		std::cout << YELLOW "<< Output Inventory Materia to Use [8] >>" RESET << std::endl;
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Inventory Slot [" << i << "]: ";
			bob.use(i, iva);
		}

		delete you;
		delete me;
		delete m_src;

	printHeader("Testing Memory Leaks");
	return 0; 
}



