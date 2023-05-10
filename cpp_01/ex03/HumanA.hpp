/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:58:49 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/09 23:53:31 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:

	std::string	_name;
	Weapon&		_weapon;
	
	public:
	
	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	Weapon		getWeapon( void ) const;
	void		setWeapon( Weapon weapon);
	std::string	getName( void ) const;
	void		setName( std::string name );
	void		attack( void );
};

#endif