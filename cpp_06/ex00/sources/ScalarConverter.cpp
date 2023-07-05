/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:48:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/05 20:56:06 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &other )
{
	*this = other;
	return ;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const &other )
{
	(void)other;
	return (*this);
}

void ScalarConverter::convert( char *input )
{
	(void)input;
	std::cout << "DAALE" << std::endl;
}