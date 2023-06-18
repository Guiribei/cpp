/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:35:13 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 16:16:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &other ) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
	return ;
}

Dog &Dog::operator=( const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void )
{
	std::cout << "Au Au Au" << std::endl;
}