/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:53:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 16:31:31 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:

	Brain *brain;

	public:

	Cat( void );
	~Cat( void );
	Cat ( const Cat &other);
	Cat &operator=( const Cat &other );
	virtual void makeSound( void ) const;
	std::string getIdea( const int position ) const;
	void setIdea( int position, const std::string &idea);
};

#endif