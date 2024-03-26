/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:26:20 by pin3dev           #+#    #+#             */
/*   Updated: 2024/01/18 08:35:22 by pin3dev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract = 8;

/***************************
	Canonical form
****************************/

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed &src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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
	Value Handling
****************************/

Fixed::Fixed(int dec) : _value(dec << _fract)
{
	//std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(float dec) : _value(roundf(dec * (1 << _fract)))
{
	//std::cout << "Float constructor called" << std::endl;
}
float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _fract));
}
int Fixed::toInt(void) const
{
	return (_value >> _fract);
}
std::ostream &operator<<(std::ostream& out_, const Fixed& obj_)
{
	out_ << obj_.toFloat();

	return (out_);
}

/***************************
Adicional member functions
****************************/

//Comparison value operators
const Fixed &Fixed::min(const Fixed &fst, const Fixed &sec)
{
	if (fst.getRawBits() > sec.getRawBits())
		return sec;
	return fst;
}
const Fixed &Fixed::max(const Fixed &fst, const Fixed &sec)
{
	if (fst.getRawBits() > sec.getRawBits())
		return fst;
	return sec;
}
Fixed &Fixed::min(Fixed &fst, Fixed &sec)
{
	if (fst > sec)
		return sec;
	return fst;
}
Fixed &Fixed::max(Fixed &fst, Fixed &sec)
{
	if (fst > sec)
		return fst;
	return sec;
}

//Boolean Comparison operators
bool Fixed::operator>(const Fixed &sec)
{
	return (getRawBits() > sec.getRawBits());
}

bool Fixed::operator<(const Fixed &sec)
{
	return (getRawBits() < sec.getRawBits());
}

bool Fixed::operator>=(const Fixed &sec)
{
	return (getRawBits() >= sec.getRawBits());
}

bool Fixed::operator<=(const Fixed &sec)
{
	return (getRawBits() <= sec.getRawBits());
}

bool Fixed::operator==(const Fixed &sec)
{
	return (getRawBits() == sec.getRawBits());
}

bool Fixed::operator!=(const Fixed &sec)
{
	return (getRawBits() != sec.getRawBits());
}

//Arithmetic operators
Fixed Fixed::operator+(const Fixed &sec)
{
	return (Fixed(toFloat() + sec.toFloat()));
}

Fixed Fixed::operator-(const Fixed &sec)
{
	return(Fixed(toFloat() - sec.toFloat()));
}

Fixed Fixed::operator*(const Fixed &sec)
{
	return(Fixed(toFloat() * sec.toFloat()));
}

Fixed Fixed::operator/(const Fixed &sec)
{
	return(Fixed(toFloat() / sec.toFloat()));
}

//Increment and decrement operators

// pre
Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}
// post
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_value++;
	return (tmp);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_value--;
	return (tmp);
}

