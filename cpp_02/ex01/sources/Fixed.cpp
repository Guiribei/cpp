/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:14:18 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/26 15:22:36 by guribeir         ###   ########.fr       */
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