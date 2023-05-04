/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_sample.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:36:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 17:44:53 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const_sample.hpp"

Sample::Sample(float const f) : pi(f), qd (42)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void)const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return ;
}