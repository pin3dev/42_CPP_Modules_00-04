/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:27:39 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/10 12:33:45 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

		bool operator>(const Fixed &sec);
		bool operator<(const Fixed &sec);
		bool operator>=(const Fixed &sec);
		bool operator<=(const Fixed &sec);
		bool operator==(const Fixed &sec);
		bool operator!=(const Fixed &sec);

		Fixed operator+(const Fixed &sec);
		Fixed operator-(const Fixed &sec);
		Fixed operator*(const Fixed &sec);
		Fixed operator/(const Fixed &sec);

		Fixed &operator ++(void);
		Fixed &operator--(void);
		Fixed operator ++(int);
		Fixed operator--(int);

		Fixed &operator=(const Fixed &src);

		static Fixed&  min(Fixed &fst, Fixed &sec);
		static Fixed&  max(Fixed &fst, Fixed &sec);
		static const Fixed&  min(const Fixed &fst, const Fixed &sec);
		static const Fixed&  max(const Fixed &fst, const Fixed &sec);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out_, const Fixed &obj_);
#endif

