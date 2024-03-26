/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:26:48 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/16 23:06:35 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fract = 8;

/***************************
		Canonical form
****************************/

// Default constructor
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
// Copy constructor
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
// Copy assignment operator
Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();
	return (*this);
}

/***************************
	Getters and setters
****************************/

//Geter for final _value representated as fixed point
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
//Seter for final _value representated as fixed point
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
