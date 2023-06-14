/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/13 20:55:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_name = "";
	this->_hitPoints = 0;
	this->_energyPoints = 0;
	this->_attackDamage = 0;
	std::cout << "Constructor default called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << name << " has arisen" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack( const std::string &target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "No more energy points left!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " received " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " was repaired in " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "No more energy points left!" << std::endl;
}