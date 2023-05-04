/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:33:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 19:38:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_sample.hpp"

int	main(void)
{
	Sample obj1;

	obj1.public_foo = 42;
	std::cout << "obj1.public_foo = " << obj1.public_foo << std::endl;
	//obj1.private_foo = 42;
	//std::cout << "obj1.private_foo = " << obj1.private_foo << std::endl;
	obj1.publicBar();
	//obj1._privateBar();
	return (0);
}