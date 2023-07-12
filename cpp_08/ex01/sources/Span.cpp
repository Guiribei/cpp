/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:14:19 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/11 21:01:48 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _n(0)
{
	this->_vec = NULL;
	return ;
}

Span::Span( unsigned int n ) : _n(n), 
{
	this->_vec = new std::vector<int> v(n);
	return ;
}

Span::Span(Span const &src) : _n(src._n), _vec(new std::vector<int>(*src._vec))
{
	return ;
}

Span::~Span() 
{
	delete _vec;
}

Span & Span::operator=(Span const &src) 
{
	if (this != &src) 
	{
		delete _vec;
		_n = src._n;
		_vec = new std::vector<int>(*src._vec);
	}
	return *this;
}

