/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 19:22:54 by guribeir         ###   ########.fr       */
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
	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return 1;
	}
	//std::string line;
	//std::map<std::string, double> bitcoin;
	return 0;
}