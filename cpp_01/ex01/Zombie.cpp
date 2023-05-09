/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:41:08 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/08 23:40:57 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
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

void	Zombie::setName( std::string name )
{
	this->_name = name;
	return ;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde = new Zombie[N];
    int i;

    if (N <= 0)
        return NULL;
    i = 0;
    while (i < N)
        horde[i++].setName(name);
    return horde;
}
