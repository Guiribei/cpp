/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:44 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/23 20:04:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
	Fixed& operator=( const Fixed& other );

	int		getRawBits( void ) const;
	void	setRawBits( int const value );
	// Fixed	ConvertToFixed(float num);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	friend std::ostream& operator<<(std::ostream& os, const Fixed& fx);
};

#endif