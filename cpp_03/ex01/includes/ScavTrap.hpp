/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:58:30 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/14 22:56:06 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &other );
	~ScavTrap( void );
	ScavTrap &operator=( const ScavTrap &other );

	void		attack( const std::string& target );
	void		guardGate( void );

};

#endif