/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:58:30 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/14 23:19:57 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &other );
	~FragTrap( void );
	FragTrap &operator=( const FragTrap &other );

	void		attack( const std::string& target );
	void		highFivesGuys( void );

};

#endif