/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:28:03 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/09 21:25:13 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	private:

	std::string	_type;
	
	public:

	Weapon( std::string type );
	~Weapon( void );
	
	std::string	getType( void ) const;
	void		setType( std::string type );
};

#endif