/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 17:14:32 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	this->type = "AAnimal";
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal &other )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
	return ;
}

AAnimal &AAnimal::operator=( const AAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "AAnimal assignment operator called" << std::endl;
	return (*this);
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}

void	AAnimal::setType( std::string const type )
{
	this->type = type;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "Urrhhhh" << std::endl;
}