/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:35:39 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/12 21:59:25 by guribeir         ###   ########.fr       */
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
		this->_array = NULL;
		this->_size = 0;
		std::cout << "Default constructor called" << std::endl;
		return ;
	}

	Array ( unsigned int n )
	{
		this->_array = new T[n];
		for (unsigned int i = 0; i < n; i++)
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
		this->_array = NULL;
		this->_size = 0;
		*this = other;
		return ;
	}

	Array &operator=( Array const &other )
	{
		if (this != &other)
		{
			if (this->_array)
				delete [] this->_array;
			this->_array = new T[other._size];
			this->_size = other._size;
			for (unsigned int i = 0; i < other._size; i++)
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
		if (_array != NULL)
			delete [] this->_array;
		return ;
	}

	T &operator[]( unsigned int index ) const
	{
		if (index >= this->_size)
			throw std::out_of_range("Index out of bounds");
		return (this->_array[index]);
	}

	unsigned int size( void ) const
	{
		return this->_size;
	}

	private:
	T		*_array;
	unsigned int	_size;
};

#endif