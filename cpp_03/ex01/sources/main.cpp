/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:54:02 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string name = "Robert";
	std::string	target = "Edu";
	ScavTrap scavtrap(name);

	scavtrap.attack(target);
	scavtrap.takeDamage(15);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();
	std::cout << "The fight is over!" << std::endl;
	return (0);
}
