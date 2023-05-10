/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:57:57 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/10 00:01:42 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
	
	std::string	_name;
	Weapon		*_weapon;
	
	public:

	HumanB( std::string name );
	~HumanB( void );
	
	Weapon		getWeapon( void ) const;
	void		setWeapon(Weapon& weapon);
	std::string	getName( void ) const;
	void		setName( std::string name);
	void		attack( void );
};

#endif