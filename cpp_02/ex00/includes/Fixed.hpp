/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:13:44 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/15 21:42:21 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
	
	std::string _name;
	
	public:

	Fixed( std::string name );
	~Fixed( void );
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);

	std::string getName() const;
};

#endif