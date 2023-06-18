/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/17 21:48:01 by guribeir         ###   ########.fr       */
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

void	Animal::makeSound( void )
{
	std::cout << "Urrhhhh" << std::endl;
}