/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:05:28 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/25 21:32:28 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<std::pair<int,int> > PmergeMe::_vector;

PmergeMe::PmergeMe(void)
{
	return ;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	(void)rhs;
	return (*this);
}

static void fillVectorInPairs(char **input)
{
	int i = 1;
	while (input[i])
	{
		int first = atoi(input[i]);
		int second = -1;
		if(input[i+1])
		{
			second = atoi(input[i+1]);
			++i;
		}
		PmergeMe::_vector.push_back(std::pair<int, int>(first, second));
		++i;
	}
}

static void orderPairs()
{
	for (size_t i = 0; i < PmergeMe::_vector.size(); i++)
	{
		if (PmergeMe::_vector[i].first > PmergeMe::_vector[i].second)
			std::swap(PmergeMe::_vector[i].first, PmergeMe::_vector[i].second);
	}
}

void PmergeMe::mergeVector(char **input)
{
	fillVectorInPairs(input);
	for (size_t i = 0; i < PmergeMe::_vector.size(); i++)
		std::cout << PmergeMe::_vector[i].first << " " << PmergeMe::_vector[i].second << std::endl;
	orderPairs();
}