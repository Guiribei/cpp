/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:06:08 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/08 03:41:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

static std::ostream &operator<<(std::ostream &os, Data &data)
{
	os << "String one: " << data.s1 << std::endl
		<< "String two: " << data.s2 << std::endl
		<< "Password: " << data.nb << std::endl;
	return os;
}
int main( void )
{
	Data someData = {"Hello", "World", 1};
	
	//code;
	return (0);
}