/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:58:45 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/09 21:36:02 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}
	
Weapon	HumanB::getWeapon( void ) const
{
	return this->_weapon;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

std::string	HumanB::getName( void ) const
{
	return this->_name;
}

void	HumanB::setName( std::string name)
{
	this->_name = name;
}

void		HumanB::attack( void )
{
	std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}
