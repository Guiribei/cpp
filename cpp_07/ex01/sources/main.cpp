/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:20:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 18:36:09 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	newer(T &var)
{
	var = "new";
}

template <typename T>
void showValue(const T &value) {
	std::cout << value << " ";
}

int main( void )
{
	{
		std::string str[2]= {"some random stuff", "another random stuff"};
		
		iter(str, 2, newer<std::string>);
		std::cout << str[0] << std::endl;
		std::cout << str[1] << std::endl;
	}
	{
		int arr[2] = {1, 1};
		for (int i = 0; i < 10; i++)
		{
			arr[i] = 1;
		}
		iter(arr, 2, showValue<const int>);
		std::cout << std::endl;
	}
	return 0;
}