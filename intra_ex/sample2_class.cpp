/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample2_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:49:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 15:54:02 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sample2_class.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this-> a2 << std::endl;
	std::cout << "this->a3 = " << this-> a3 << std::endl;
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}