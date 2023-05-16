/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:12:58 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/15 21:46:03 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	obj1("dale");
	Fixed	obj2("firme");
	Fixed	obj3(obj1);
	Fixed	obj4("errado");

	std::cout << "Before assignment: " << std::endl;
	std::cout << "obj1: " << obj1.getName() << std::endl;
    std::cout << "obj2: " << obj2.getName() << std::endl;
    std::cout << "obj3: " << obj3.getName() << std::endl;
	std::cout << "obj4: " << obj4.getName() << std::endl;

	obj4 = obj2;

	std::cout << "After assignment: " << std::endl;
	std::cout << "obj1: " << obj1.getName() << std::endl;
    std::cout << "obj2: " << obj2.getName() << std::endl;
    std::cout << "obj3: " << obj3.getName() << std::endl;
	std::cout << "obj4: " << obj4.getName() << std::endl;
	
	return (0);
}