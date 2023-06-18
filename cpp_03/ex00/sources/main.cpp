/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:45:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "Jhonson";
	std::string rename = "jhonson";
	ClapTrap jhonson(name);
	std::string	target = "Edu";

	std::cout << jhonson.getName() << std::endl;
	jhonson.setName(rename);
	jhonson.attack(target);
	jhonson.takeDamage(5);
	jhonson.beRepaired(2);
	std::cout << jhonson << std::endl;
	std::cout << "The fight is over!" << std::endl;
	return (0);
}
