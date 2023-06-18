/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:53:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/18 18:39:38 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat( void );
	~WrongCat( void );
	WrongCat ( const WrongCat &other);
	WrongCat &operator=( const WrongCat &other );
	void	makeSound( void ) const;
};

#endif