/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:20:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 19:50:08 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	{
		Array<int> arr(2);
		
		arr[0] = 1;
		arr[1] = 2;
		std::cout << arr[0] << std::endl;
		std::cout << arr[1] << std::endl;
		try
		{
			std::cout << arr[3] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	{
		Array<char> arr(11);
		std::string str = "Hello World";
		
		for (int i = 0; i < 11; i++)
		{
			arr[i] = str[i];
		}
		for (int i = 0; i < 11; i++)
		{
			std::cout << arr[i];
		}
		std::cout << std::endl;
	}
	return 0;
}