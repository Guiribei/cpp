/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:14:18 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/14 18:30:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	//copiar os atributos;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		//copiar os atributos de other para este objeto;
	}
	return (*this);
}
