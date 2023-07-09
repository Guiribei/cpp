/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:48:29 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 01:21:13 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int		rand = std::rand() % 3;


	if (rand == 0)
		return (new A);
	else if (rand == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type (pointer): A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type (pointer): B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type (pointer): C" << std::endl;
	else
		std::cout << "Neither A nor B nor C pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type (reference): A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "Type (reference): B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "Type (reference): C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Neither A nor B nor C reference" << std::endl;
			}
		}
	}
}