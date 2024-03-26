/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:27:21 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/10 09:46:01 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <fstream>

class Fixed
{
	private:
		int _value;
		static const int _fract;
	public:
		Fixed();
		Fixed(int dec);
		Fixed(float dec);
		Fixed(const Fixed &src);
		~Fixed();

		int toInt(void) const;
		float toFloat(void) const;
		
		Fixed &operator=(const Fixed &src);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream &out_, const Fixed &obj_);
#endif