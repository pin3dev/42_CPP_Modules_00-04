/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:40:52 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:40:54 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <string>
#include <iostream>
#include <fstream>

static bool check_err(std::ios& file)
{
	if (!file)
	{
		std::cerr 
		<< RED "[Error]:Cannot open the file" RESET
		<<std::endl;
		return true;
	}
	return false;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string f_name(av[1]);
		std::ifstream f_in(f_name.c_str());
		if (check_err(f_in))
			return (1);
		std::ofstream f_out((f_name + ".replace").c_str());
		if (check_err(f_out))
		{
			f_in.close();
			return (1);
		}
		if (_old.empty())
		{
			std::cerr 
			<< RED "[Error]:Empty arg1" RESET
			<<std::endl;
			return(1);
		}
		Replacer cur(av[2], av[3]);
		cur.setter_word(f_in, f_out);
		return (0);
	}
	std::cerr
	<< RED "[Error] Wrong amount of args" RESET 
	<< std::endl;
	
	std::cout 
	<< GRAY "Try: ./replacer <filename> <old_word> <new_word>" RESET 
	<< std::endl;
	return (1);	
}

/*
testes:
./replace Makefile all allzinho
./replace Makefile all allzinhooooooooo%
./replace Makefile all allall
./replace Makefile all allallallallallallallallall
*/
