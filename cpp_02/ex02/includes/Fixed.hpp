/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:44 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/01 20:30:58 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
	
	int					_value;
	static const int	num_bits = 8;
	
	public:

	Fixed( void );
	Fixed( const int num );
	Fixed( const float num );
	~Fixed( void );
	Fixed( const Fixed& other );
	Fixed&	operator=( const Fixed& other );
	Fixed	operator+(const Fixed& rhs) const;
	Fixed	operator-(const Fixed& rhs) const;
	Fixed	operator*(const Fixed& rhs) const;
	Fixed	operator/(const Fixed& rhs) const;
	Fixed 	&Fixed::operator++(void);
	Fixed 	Fixed::operator++(int);

	int		getRawBits( void ) const;
	void	setRawBits( int const value );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	friend std::ostream& operator<<(std::ostream& os, const Fixed& fx);
};

#endif