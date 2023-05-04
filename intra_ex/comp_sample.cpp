/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_sample.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:07:17 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:13:39 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comp_sample.hpp"

Sample::Sample(int value) : _foo(value)
{
	std::cout << "Constructor called" << std::endl;
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

int	Sample::compare(Sample * other) const
{
	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}