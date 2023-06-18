/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:29:42 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:51:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	this->_name = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
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
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack( const std::string &target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap is dead, it can't perform an attack" << std::endl;
		return ;
	}
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
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is dead, it can't take any more damage" << std::endl;
		return ;
	}
	std::cout << this->_name << " received " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is dead, it can't be repaired" << std::endl;
		return ;
	}
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << " was repaired in " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "No more energy points left!" << std::endl;
}

std::string	ClapTrap::getName( void ) const
{
	return this->_name;
}

int	ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

int	ClapTrap::getAtackDamage( void ) const
{
	return this->_attackDamage;
}

void	ClapTrap::setName( std::string const name )
{
	this->_name = name;
}

void	ClapTrap::setHitPoints( int const hitPoints )
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints( int const energyPoints )
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAtackDamage( int const attackDamage )
{
	this->_attackDamage = attackDamage;
}

std::ostream &operator<<(std::ostream &os, const ClapTrap &ct)
{
	os << "Name: " << ct.getName() << "\n";
	os << "Hit Points: " << ct.getHitPoints() << "\n";
	os << "Energy Points: " << ct.getEnergyPoints() << "\n";
	os << "Attack Damage: " << ct.getAtackDamage();
	return (os);
}