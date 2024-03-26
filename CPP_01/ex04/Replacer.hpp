/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:41:13 by ivbatist          #+#    #+#             */
/*   Updated: 2023/12/27 21:41:15 by ivbatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP


#define R_F 1
#define W_F 2
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define GRAY  "\x1b[37m"
#define RED    "\x1b[1;31m"
#define BKGRAY	"\x1b[47;90m"

#include <string>

class Replacer
{
    public:
        Replacer(std::string before, std::string after);
        ~Replacer();
        void setter_word(std::ifstream& r_file, std::ofstream& w_file);

    private:
        std::string _before;
        std::string _after;
};
#endif
