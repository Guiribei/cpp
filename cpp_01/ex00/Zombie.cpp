/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:41:08 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/07 21:19:10 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << ": Zombie Destroied" << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie( std::string name )
{
	Zombie*	zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void randomChump( std::string name )
{
	Zombie	zombie(name);

	zombie.announce();
	return ;
}
