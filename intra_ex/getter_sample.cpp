/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter_sample.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:23:11 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 20:50:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter_sample.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

void Sample::setFoo(int value)
{
	if (value >= 0)
		this->_foo = value;
	return ;
}