/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_sample.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:29:28 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:35:19 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "static_sample.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst++;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst--;
	return ;
}

int	Sample::getNbInst(void)
{
	return (_nbInst);
}

int	Sample::_nbInst = 0;