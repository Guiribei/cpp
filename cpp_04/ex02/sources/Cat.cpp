/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:59:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 16:31:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
	return ;
}

Cat::Cat( const Cat &other ) : AAnimal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
	return ;
}

Cat &Cat::operator=( const Cat &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miiaau" << std::endl;
}

std::string Cat::getIdea( const int position) const
{
	return (this->brain->getIdea(position));
}

void Cat::setIdea(int position, const std::string &idea)
{
	this->brain->setIdea(position, idea);
}