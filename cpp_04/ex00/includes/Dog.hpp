/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:33:56 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/17 21:38:32 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
	Dog( void );
	~Dog( void );
	Dog( const Dog &other );
	Dog &operator=( const Dog &other );
	void	makeSound( void );
};

#endif