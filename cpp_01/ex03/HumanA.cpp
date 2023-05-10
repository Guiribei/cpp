/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:58:02 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/09 21:21:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon ) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

Weapon	HumanA::getWeapon( void ) const
{
	return this->_weapon;
}

void	HumanA::setWeapon( Weapon weapon)
{
	this->_weapon = weapon;
}

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}

void	HumanA::setName( std::string name)
{
	this->_name = name;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << "attacks with their" << this->_weapon.getType() << std::endl;
}
