/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:06:08 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/08 21:58:28 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

std::ostream &operator<<(std::ostream &os, Data &data)
{
	os << "String one: " << data.s1 << "\n" << "String two: " << data.s2 << "\n" << "Password: " << data.nb << std::endl;
	return os;
}

int main( void )
{
	Data someData = {"Hello", "World", 1};
	Data *pointer;
	uintptr_t ptr;
	
	std::cout << someData;
	pointer = &someData;
	ptr = Serializer::serialize(pointer);
	std::cout << ptr << std::endl;
	pointer = Serializer::deserialize(ptr);
	std::cout << *pointer;
	return (0);
}