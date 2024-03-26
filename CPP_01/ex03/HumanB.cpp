/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:39:37 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:39:44 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

void	HumanB::attack()
{
	if (this->_weapon)
	{
		std::cout << this->_name 
        << " attacks with their "
        << this->_weapon->getType()
        << std::endl;
		return ;
	}
	std::cerr << RED "[Error]: Weapon not found" RESET
    << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}
