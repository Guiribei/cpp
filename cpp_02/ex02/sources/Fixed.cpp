/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:14:18 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/06 20:24:00 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed( const int num )
{
	this->_value = num << num_bits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float num )
{
	this->_value = roundf(num * (1 << num_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_value = other.getRawBits();
	}
	return (*this);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	Fixed lhs;

	lhs._value = this->_value + rhs._value;
	return lhs;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	Fixed lhs;

	lhs._value = this->_value - rhs._value;
	return lhs;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	Fixed lhs;

	lhs._value = (this->_value * rhs._value >> num_bits);
	return lhs;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed lhs;

	lhs._value = ((this->_value << num_bits) / rhs._value);
	return lhs;
}

Fixed &Fixed::operator++(void)
{
	++this->_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	++this->_value;
	return temp;
}

Fixed &Fixed::operator--(void)
{
	--this->_value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	--this->_value;
	return *this;
}

bool Fixed::operator<(const Fixed &fx) const
{
	return(_value < fx._value);
}

bool Fixed::operator>(const Fixed &fx) const
{
	return(_value > fx._value);
}

bool Fixed::operator<=(const Fixed &fx) const
{
	return(_value <= fx._value);
}

bool Fixed::operator>=(const Fixed &fx) const
{
	return(_value >= fx._value);
}

bool Fixed::operator==(const Fixed &fx) const
{
	return(_value == fx._value);
}

bool Fixed::operator!=(const Fixed &fx) const
{
	return(_value != fx._value);
}

const Fixed &Fixed::max(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1 >= fx2)
		return (fx1);
	return (fx2);
}

const Fixed &Fixed::min(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1 <= fx2)
		return (fx1);
	return (fx2);
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2)
{
	if (fx1 >= fx2)
		return (fx1);
	return (fx2);
}

Fixed &Fixed::min(Fixed &fx1, Fixed &fx2)
{
	if (fx1 <= fx2)
		return (fx1);
	return (fx2);
}

int Fixed::getRawBits() const
{
    return _value;
}

void Fixed::setRawBits(int const value)
{
	this->_value = value;
    return ;
}

float	Fixed::toFloat( void ) const
{
	float float_number;

	float_number = float((float)(_value) / (float)(1 << num_bits));
	return (float_number);
}

int		Fixed::toInt( void ) const
{
	int	restored_int;

	restored_int = _value >> num_bits;
	return (restored_int);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fx)
{
	os << fx.toFloat();
	return (os);
}
