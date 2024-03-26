/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:42:24 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:42:27 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)
	{
        std::cerr << RED "[Error]: Option not valid!" RESET << std::endl;
        std::cout << GRAY "Try: ./harl <level>" RESET << std::endl;
        return (1);
	}

	harl.complain(argv[1]);
	return (0);
}
