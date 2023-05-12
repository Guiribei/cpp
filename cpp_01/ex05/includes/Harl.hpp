/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:17:20 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/11 21:25:52 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl
{
	private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	public:
	
	Harl( void );
	~Harl( void );

	void complain( std::string level );
};

#endif