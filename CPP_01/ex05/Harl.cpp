/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:41:24 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:26 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	void (Harl::* methods[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	size_t i = 0;

	while(i < 4 && level != _level[i])
		i++;
	if (i < 4)
		(this->*methods[i])();
}

void Harl::debug(void)
{
	std::cout << GRAY "[DEBUG]: "
	<< "Identifying issues for precise diagnosis..." RESET
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << CYAN "[INFO]: "
	<< "Normal program execution. Tracking operations for control puposes..." RESET
	<< std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW "[WARNING]: "
	<< "Potential issue detected. It can be handled of ignored, but monitoring is recommended." RESET
	<< std::endl;
}

void Harl::error(void)
{
	std::cout << RED "[ERROR]: "
	<< "Critical failure. Manual intervention required to resolve the issue." RESET
	<< std::endl;
}
