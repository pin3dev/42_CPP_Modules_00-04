/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:00:26 by pin3dev           #+#    #+#             */
/*   Updated: 2024/02/01 11:28:16 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private :
		AMateria	*_slot[4];
	public :
		// Canonical Form
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);
		~MateriaSource();

		//Getter
		std::string getMatType(int idx) const;
		
		// Additional Function Members
		void learnMateria(AMateria *src);
		AMateria* createMateria(std::string const & type);

	private :
		//Utility Functions
		void	initSlots(void);
		void	clearSlots(void);
};

#endif