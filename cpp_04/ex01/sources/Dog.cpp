/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:35:13 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/19 22:59:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog &other ) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
	return ;
}

Dog &Dog::operator=( const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Au Au Au" << std::endl;
}

std::string Dog::getIdea( const int position) const
{
	return (this->brain->getIdea(position));
}

void Dog::setIdea(int position, const std::string &idea)
{
	this->brain->setIdea(position, idea);
}