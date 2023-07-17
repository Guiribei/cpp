/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 22:53:18 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Usage: ./bitcoin [filename]" << std::endl;
		return 1;
	}
	BitcoinExchange exchange;
	return 0;
}