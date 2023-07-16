/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:14:19 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 17:07:15 by guribeir         ###   ########.fr       */
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

const char *Span::WrongAccessException::what() const throw()
{
	return ("Invalid index access");
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
	if (i < 0 || i >= (int)this->_vec.size())
		throw Span::WrongAccessException();
	return (this->_vec[i]);
}

int Span::shortestSpan( void )
{
	if (this->_n < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return (min);
}

int Span::longestSpan( void )
{
	if (this->_n < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}
