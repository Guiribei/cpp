/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:40:53 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
	return ;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::setType( std::string const type )
{
	this->type = type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Urrhhhh" << std::endl;
}