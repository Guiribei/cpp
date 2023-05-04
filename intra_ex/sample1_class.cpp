/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample1_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:34:51 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 15:40:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sample1_class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor Called" << std::endl;
	
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	
	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	
	this->a3 = p3;
	std::cout << "this->a3 =" << this->a3 << std::endl;
	
	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
