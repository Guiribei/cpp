/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 17:13:53 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal &other )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
	return ;
}

Animal &Animal::operator=( const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::setType( std::string const type )
{
	this->type = type;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Urrhhhh" << std::endl;
}