/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:02:59 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/23 15:25:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> RPN::_stack;

const char *RPN::InvalidInputException::what() const throw()
{
	return "Error: invalid input.";
}

const char *RPN::ZeroDivisionException::what() const throw()
{
	return "Error: division by zero";
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

static bool isSignal( char c )
{
	if (c == '+' || c == '-' || c == '/' || c == '*')
		return (true);
	return (false);
}

static bool moreOperators( std::string input )
{
	int digits;
	int operators;

	digits = 0;
	operators = 0;
	for (int i = 0; input[i]; i++)
	{
		if (std::isdigit(input[i]))
			digits++;
		if (isSignal(input[i]))
			operators++;
		if (!isSignal(input[i]) && !std::isdigit(input[i]))
			return (true);
	}
	if (operators >= digits )
		return (true);
	return (false);
}

static void validateInput( std::string input )
{
	trimWhiteSpaces(input);
	if (input.length() < 3 || moreOperators(input))
		throw RPN::InvalidInputException();
	if (std::isdigit(*(input.end() - 1)) || isSignal(*(input.begin())))
		throw RPN::InvalidInputException();
	if (std::isdigit(*(input.begin())) && isSignal(*(input.begin() + 1)))
		throw RPN::InvalidInputException();
}

void RPN::calculate( std::string input )
{
	int nb1;
	int nb2;
	int res;

	validateInput(input);
	for (int i = 0; input[i]; i++)
	{
		if (std::isdigit(input[i]))
			RPN::_stack.push(static_cast<int>(input[i] - '0'));
		else if (isSignal(input[i]))
		{
			nb2 = RPN::_stack.top();
			RPN::_stack.pop();
			if (RPN::_stack.size() == 0)
				throw RPN::InvalidInputException();
			nb1 = RPN::_stack.top();
			RPN::_stack.pop();
			switch (input[i])
			{
			case '+':
				res = nb1 + nb2;
				RPN::_stack.push(res);
				continue;
			case '-':
				res = nb1 - nb2;
				RPN::_stack.push(res);
				continue;
			case '*':
				res = nb1 * nb2;
				RPN::_stack.push(res);
				continue;
			case '/':
				if (nb2 == 0)
					throw RPN::ZeroDivisionException();
				res = nb1 / nb2;
				RPN::_stack.push(res);
				continue;
			default:
				throw RPN::InvalidInputException();
				break;
			}
			res = RPN::_stack.top();
		}
	}
	std::cout << res << std::endl;
}
