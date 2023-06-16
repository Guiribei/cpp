/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/15 21:16:13 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "Animal";
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Animal &Animal::operator=( const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound( void )
{
	std::cout << "Urrhhhh" << std::endl;
}