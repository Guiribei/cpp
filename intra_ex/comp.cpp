/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:15:06 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:19:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "comp_sample.hpp"

int	main(void)
{
	Sample	obj1(42);
	Sample obj2(42);

	if (&obj1 == &obj1)
		std::cout << "obj1 and obj1 are phisically equal" << std::endl;
	else
		std::cout << "obj1 and obj1 are not phisically equal" << std::endl;
		
	if (&obj1 == &obj2)
		std::cout << "obj1 and obj2 are phisically equal" << std::endl;
	else
		std::cout << "obj1 and obj2 are not phisically equal" << std::endl;

	if (obj1.compare(&obj1) == 0)
		std::cout << "obj1 and obj1 are structurally equal" << std::endl;
	else
		std::cout << "obj1 and obj1 are not structurally equal" << std::endl;

	if (obj1.compare(&obj2) == 0)
		std::cout << "obj1 and obj2 are structurally equal" << std::endl;
	else
		std::cout << "obj1 and obj2 are not structurally equal" << std::endl; 
	return (0);
}