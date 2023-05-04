/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_sample.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:49:00 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:52:31 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pointer_sample.hpp"

Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const
{
	std::cout << "Member function called" << std::endl;
	return;
}