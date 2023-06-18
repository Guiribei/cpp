/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:27:06 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:40:01 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
	
	std::string type;
	
	public:
	
	WrongAnimal( void );
	~WrongAnimal( void );
	WrongAnimal( const WrongAnimal &other );
	WrongAnimal &operator=( const WrongAnimal &other );
	std::string	getType( void ) const;
	void setType( std::string const type );
	void makeSound( void ) const;
};

#endif