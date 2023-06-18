/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:15:39 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 19:20:19 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << name << " has arisen" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=( const FragTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "FragTrap Assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack( const std::string &target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap is dead, it can't perform an attack" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "No more energy points left!" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "ScavTrap " << this->_name << " is requesting an awesome high five" << std::endl;
}
