/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:27:06 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:50:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	public:
	
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &other );
	~ClapTrap( void );
	ClapTrap &operator=( const ClapTrap &other );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	std::string getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAtackDamage( void ) const;
	void		setName( std::string const name );
	void		setHitPoints( int const hitPoints );
	void		setEnergyPoints( int const energyPoints );
	void		setAtackDamage( int const attackDamage );
};

std::ostream &operator<<(std::ostream &os, const ClapTrap &ct);

#endif