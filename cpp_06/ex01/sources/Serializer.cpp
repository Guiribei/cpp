/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:06:59 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/08 01:09:16 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer ( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Serializer::~Serializer ( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Serializer::Serializer ( Serializer const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Serializer & Serializer::operator=( Serializer const &other )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		//code;
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw;
	
	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr;
	
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}