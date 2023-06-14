/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/13 20:59:03 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "Jhonson";
	ClapTrap jhonson(name);
	std::string	target = "Edu";

	jhonson.attack(target);
	jhonson.takeDamage(5);
	jhonson.beRepaired(2);
	std::cout << "The fight is over!" << std::endl;
	return (0);
}
