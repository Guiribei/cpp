/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/20 21:39:23 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Usage: ./RPN \"<expression>\"" << std::endl;
		return 0;
	}
	try
	{
		RPN::calculate( std::string(argv[1]) );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}