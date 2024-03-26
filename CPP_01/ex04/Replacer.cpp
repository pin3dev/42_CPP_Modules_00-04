/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:41:07 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:09 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <string>
#include <fstream>

Replacer::Replacer(std::string before, std::string after) :  _before(before), _after(after)
{
}

Replacer::~Replacer()
{
}

void Replacer::setter_word(std::ifstream& r_file, std::ofstream& w_file)
{
	std::string line;
	std::size_t index;

	while (std::getline(r_file, line))
	{
		index = line.find(_before);
		while (index != std::string::npos)
		{
			line.erase(index, this->_before.length());
			line.insert(index, this->_after);
			index += this->_after.length();
			index = line.find(this->_before, index);
		}
		w_file << line << std::endl;
	}
	r_file.close();
	w_file.close();
}
