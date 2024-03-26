/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:40:40 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:40:42 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define GRAY  "\x1b[37m"
#define RED    "\x1b[1;31m"
#define BKGRAY	"\x1b[47;90m"

class Weapon
{
	private :
		std::string _type;
	public :
		Weapon();
		Weapon(std::string type);
		const std::string& getType();
		void    setType(std::string type);
};

#endif
