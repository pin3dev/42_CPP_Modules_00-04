/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:35:49 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:35:51 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define GRAY  "\x1b[37m"
#define RED    "\x1b[1;31m"
#define BKGRAY	"\x1b[47;90m"

class Zombie
{
	private :
		std::string	_name;
	public :
		//Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
