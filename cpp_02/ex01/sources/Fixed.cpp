/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:14:18 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/23 20:14:23 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed( const int num ) : _value(num)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float num )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = num;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
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
	return ((float)this->_value);
}

int		Fixed::toInt( void ) const
{
	return ((int)this->_value);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx)
{
    os << fx.toFloat();
    return (os);
}