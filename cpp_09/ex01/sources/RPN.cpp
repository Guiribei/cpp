/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:02:59 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/20 21:42:58 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> RPN::_stack;

const char *RPN::InvalidInputException::what() const throw()
{
	return "Error: invalid input.";
}

RPN::RPN( void )
{
	return ;
}

RPN::RPN( RPN const & src )
{
	*this = src;
	return ;
}

RPN::~RPN( void )
{
	return ;
}

RPN & RPN::operator=( RPN const & src )
{
	(void)src;
	return *this;
}

static void trimWhiteSpaces( std::string &str )
{
	str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
}

void RPN::calculate( std::string input )
{
	trimWhiteSpaces(input);
	if (input.length() < 3)
		throw RPN::InvalidInputException();
	if (std::isdigit(*(input.end() - 1)))
		throw RPN::InvalidInputException();
}
