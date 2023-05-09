/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:30:28 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/08 23:23:01 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			i;
	Zombie*	horde;

	i = 0;
	horde = zombieHorde(10, "Josivaldo");
	if (horde == NULL)
		return (-1);
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}