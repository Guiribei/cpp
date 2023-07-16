/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:20:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 17:08:09 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
	{
		Span arr(2);

		arr.addNumber(42);
		try
		{
			std::cout << arr[2] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		arr.addNumber(21);
		try
		{
			arr.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span arr(10000);
		std::vector<int> vec(10000, 42);
		
		try
		{
			arr.addNumbers(vec.begin(), vec.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		for (int i = 0; i < 10000; i++)
			std::cout << arr[i] << std::endl;
	}
	{
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}