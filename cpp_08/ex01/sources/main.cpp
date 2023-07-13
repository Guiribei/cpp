/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:20:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/12 23:25:35 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
	{
		Span arr(2);

		arr.addNumber(42);
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
	return 0;
}