/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:05:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/28 21:22:23 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <ctime>

class PmergeMe
{
	private:
	
	PmergeMe(void);
	PmergeMe(PmergeMe const &src);
	~PmergeMe(void);
	PmergeMe	&operator=(PmergeMe const &rhs);

	public:

	static std::vector<std::pair<int,int> > _vector;
	static std::deque<std::pair<int,int> > _deque;
	static void mergeDeque(char **input);
	static void mergeVector(char **input);
};

#endif