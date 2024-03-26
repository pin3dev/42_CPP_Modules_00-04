/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:41:31 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:33 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define GRAY  "\x1b[37m"
#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define BKGRAY	"\x1b[47;90m"

#include <string>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
