/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sample.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:24:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 18:31:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_sample.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->public_foo = 0;
	std::cout << "this->public_foo = " << this->public_foo << std::endl;
	
	this->_private_foo = 0;
	std::cout << "this->_private_foo = " << this->_private_foo << std::endl;

	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	return ;
}