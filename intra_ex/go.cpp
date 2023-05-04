/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:47:11 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 20:50:09 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter_sample.hpp"

int	main(void)
{
	Sample	obj1;

	obj1.setFoo(42);
	std::cout << "obj1.getFoo(): " << obj1.getFoo() << std::endl;
	obj1.setFoo(-42);
	std::cout << "obj1.getFoo(): " << obj1.getFoo() << std::endl;
	
	return (0);
}