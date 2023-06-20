/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:27:06 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 16:45:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
	
	std::string type;
	
	public:
	
	AAnimal( void );
	virtual ~AAnimal( void );
	AAnimal( const AAnimal &other );
	AAnimal &operator=( const AAnimal &other );
	std::string	getType( void ) const;
	void setType( std::string const type );
	virtual void makeSound( void ) const = 0;
};

#endif