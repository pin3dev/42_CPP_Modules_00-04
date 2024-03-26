/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:27:15 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/16 23:08:58 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <fstream>
#include <cmath>

const int Fixed::_fract = 8;

/***************************
	Canonical form
****************************/

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
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

int Fixed::getRawBits(void) const
{
	return (this->_value);
}
void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/***************************
Adicional member functions
****************************/

//Constructor with int value
Fixed::Fixed(int dec) : _value(dec << _fract)
{
	std::cout << "Int constructor called" << std::endl;
}
//Constructor with float value
Fixed::Fixed(float dec) : _value(roundf(dec * (1 << _fract)))
{
	std::cout << "Float constructor called" << std::endl;
}
//Transforms representation of fixed point value to float
float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fract));
}
//Transforms representation of fixed point value to int
int Fixed::toInt(void) const
{
	return (_value >> _fract);
}
//Transmition operator overload
std::ostream &operator<<(std::ostream& out_, const Fixed& obj_)
{
	out_ << obj_.toFloat();

	return (out_);
}
