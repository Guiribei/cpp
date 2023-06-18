/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:59:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/17 22:14:52 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat( const Cat &other ) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
	return ;
}

Cat &Cat::operator=( const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void )
{
	std::cout << "Meow" << std::endl;
}