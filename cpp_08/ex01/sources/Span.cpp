/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:14:19 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/12 23:22:54 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char *Span::FullArrayException::what() const throw()
{
	return ("It's alredy full");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers");
}

Span::Span( void ) : _n(0), _vec()
{
	return ;
}

Span::Span( unsigned int n ) : _n(n), _vec(0)
{
	return ;
}

Span::Span(Span const &src) : _n(src._n), _vec(src._vec)
{
	return ;
}

Span::~Span( void )
{
	return ;
}

Span & Span::operator=(Span const &src) 
{
	if (this != &src) 
	{
		this->_n = src._n;
		this->_vec = src._vec;
	}
	return *this;
}

void	Span::addNumber( int n)
{
	if (this->_vec.size() == this->_n)
		throw Span::FullArrayException();
	this->_vec.push_back(n);
}

void	Span::addNumbers( std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		if (this->_vec.size() == this->_n)
			throw Span::FullArrayException();
		this->_vec.push_back(*start);
		start++;
	}
}

int &Span::operator[](int i)
{
	return (this->_vec[i]);
}