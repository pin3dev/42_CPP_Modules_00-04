/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:24:38 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/31 12:30:49 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria ;

//Interface
class ICharacter
{
	public:
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual std::string const & getName() const = 0;
		virtual ~ICharacter() {}
};

# endif