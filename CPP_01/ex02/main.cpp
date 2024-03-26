/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:39:05 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:39:07 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define RESET    "\x1b[0m"
#define YELLOW  "\x1b[33m"

//REFERENCE & POINTER
 int main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;
	
	std::cout <<  YELLOW "Memory Addresses: " RESET << std::endl;
    std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

    std::cout << YELLOW "Values: " RESET << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
