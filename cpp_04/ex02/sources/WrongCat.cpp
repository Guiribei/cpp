/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:59:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:42:09 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
	return ;
}

WrongCat &WrongCat::operator=( const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongCat assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miiaau" << std::endl;
}