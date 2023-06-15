/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/14 23:24:20 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string name = "Midas";
	std::string	target = "Edu";
	FragTrap fragtrap(name);

	fragtrap.attack(target);
	fragtrap.takeDamage(15);
	fragtrap.beRepaired(15);
	fragtrap.highFivesGuys();
	std::cout << "The fight is over!" << std::endl;
	return (0);
}
