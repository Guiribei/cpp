/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:35:39 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 19:33:51 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
	Array ( void )
	{
		this->_array = new T();
		this->_size = 0;
		std::cout << "Default constructor called" << std::endl;
		return ;
	}

	Array ( unsigned int n )
	{
		this->_array = new T[n];
		for (size_t i = 0; i < n; i++)
		{
			this->_array[i] = 0;
		}
		this->_size = n;
		std::cout << "Parametric constructor called" << std::endl;
		return ;
	}

	Array ( Array const &other )
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = other;
		return ;
	}

	Array &operator=( Array const &other )
	{
		if (this != &other)
		{
			delete [] this->_array;
			this->_array = new T[other._size];
			this->_size = other._size;
			for (size_t i = 0; i < other._size; i++)
			{
				this->_array[i] = other._array[i];
			}
		}
		std::cout << "Assignation operator called" << std::endl;
		return (*this);
	}

	~Array ( void )
	{
		std::cout << "Destructor called" << std::endl;
		delete [] this->_array;
		return ;
	}

	T &operator[]( size_t index )
	{
		if (index >= this->_size)
			throw std::exception();
		return (this->_array[index]);
	}

	size_t size( void ) const
	{
		return this->_size;
	}

	private:
	T		*_array;
	size_t	_size;
};

#endif