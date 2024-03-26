/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:40:06 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:40:08 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string		_name;
		Weapon	*_weapon;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
		~HumanB();
};

#endif
