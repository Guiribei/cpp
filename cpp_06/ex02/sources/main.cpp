/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:06:08 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 01:20:21 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main( void )
{
	Base *base = generate();

	std::cout << "---------Testing A, B or C ------------" << std::endl;

	identify(*base);
	identify(base);
	delete base;

	std::cout << "--------Testing Invalid -------------" << std::endl;
	
	Base *baseError = new Base();
	Base &baseErrorRef = *new Base();
	identify(baseError);
	identify(baseErrorRef);
	delete baseError;
	delete &baseErrorRef;
	return (0);
}