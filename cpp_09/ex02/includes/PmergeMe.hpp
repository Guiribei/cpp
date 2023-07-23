/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:05:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/23 17:15:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>

class PmergeMe
{
	private:
	
	static std::vector<int>		_vector;
	static std::deque<int>		_deque;
	
	PmergeMe(void);
	PmergeMe(PmergeMe const &src);
	~PmergeMe(void);
	PmergeMe	&operator=(PmergeMe const &rhs);

	public:

	static void mergeDeque(char *input);
	static void mergeVector(char *input);
};

#endif