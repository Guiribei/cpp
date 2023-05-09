/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:30:28 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/07 21:00:27 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	Foo;

	Foo = newZombie("Foo");
	Foo->announce();
	randomChump("Bar");
	delete Foo;
	return (0);
}