/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:44 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/06 20:20:52 by guribeir         ###   ########.fr       */
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
	Fixed 	&operator++(void);
	Fixed 	operator++(int);
	Fixed 	&operator--(void);
	Fixed 	operator--(int);
	
	bool	operator<(const Fixed &fx) const;
	bool	operator>(const Fixed &fx) const;
	bool	operator<=(const Fixed &fx) const;
	bool	operator>=(const Fixed &fx) const;
	bool	operator==(const Fixed &fx) const;
	bool	operator!=(const Fixed &fx) const;
	static const Fixed &max(const Fixed &fx1, const Fixed &fx2);
	static const Fixed &min(const Fixed &fx1, const Fixed &fx2);
	Fixed &max(Fixed &fx1, Fixed &fx2);
	Fixed &min(Fixed &fx1, Fixed &fx2);
	int		getRawBits( void ) const;
	void	setRawBits( int const value );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed& fx);

#endif