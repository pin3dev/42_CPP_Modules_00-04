/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:26:55 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/16 23:04:20 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int _value;
		static const int _fract;

	public:
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();

		Fixed &operator=(const Fixed &src);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif