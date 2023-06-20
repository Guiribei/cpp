/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:33:56 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 16:31:41 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
	
	Brain *brain;

	public:
	
	Dog( void );
	~Dog( void );
	Dog( const Dog &other );
	Dog &operator=( const Dog &other );
	virtual void	makeSound( void ) const;
	std::string getIdea( const int position ) const;
	void setIdea( int position, const std::string &idea);
};

#endif