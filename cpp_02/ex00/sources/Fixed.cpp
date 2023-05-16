/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:14:18 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/15 21:42:36 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( std::string name ) : _name(name)
{
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed(const Fixed& other) : _name(other._name)
{
	//algum processamento
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		//copiar os atributos de other para este objeto;
	}
	return (*this);
}

std::string Fixed::getName() const
{
    return _name;
}
