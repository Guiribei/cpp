/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:53:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/19 22:18:57 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain *brain;

	public:

	Cat( void );
	~Cat( void );
	Cat ( const Cat &other);
	Cat &operator=( const Cat &other );
	void makeSound( void ) const;
	std::string getIdea( const int position ) const;
	void setIdea( int position, const std::string &idea);
};

#endif