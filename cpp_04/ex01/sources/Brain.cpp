/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:55:38 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/19 22:24:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain &other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
	return ;
}

Brain &Brain::operator=( const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

std::string Brain::getIdea( int position ) const
{
	return (this->ideas[position]);	
}

void Brain::setIdea( int const position, std::string const &idea)
{
	if(position >= 0 && position < 100)
		this->ideas[position] = idea;
	else
		std::cout << "Invalid position" << std::endl;
}
