/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/25 21:04:43 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv )
{
	if (argc < 2)
		std::cout << "Usage: ./PmergeMe <int1> <int2> <int3> <int4> <intn...>" << std::endl;
	try
	{
		PmergeMe::mergeVector(argv);
		//PmergeMe::mergeDeque(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}