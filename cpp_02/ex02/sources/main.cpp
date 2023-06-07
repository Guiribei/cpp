/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:12:58 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/06 20:26:16 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed example(1);

	std::cout << example << std::endl;
	++example;
	std::cout << example << std::endl;
	--example;
	std::cout << example << std::endl;
	for (int i=0; i<512;i++)
		++example;
	std::cout << example << std::endl;
	example = example / 2;
	std::cout << example << std::endl;
	example = example * 2;
	std::cout << example << std::endl;
	return (0);
}
