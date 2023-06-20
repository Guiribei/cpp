/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:56:14 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/19 21:54:36 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:

	std::string	ideas[100];

	public:

	Brain( void );
	~Brain ( void );
	Brain ( const Brain &other);
	Brain &operator=( const Brain &other);
	std::string	getIdea(int position) const;
	void setIdea( int const position, std::string const &idea);
};

#endif