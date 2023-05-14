/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:32:41 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/14 17:50:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>

class	PhoneBook
{
	public:

	PhoneBook( void );
	~PhoneBook( void );

	
	void	addContact( int index );
	void	searchContact( void );
	int		getCount( void ) const;
	void	setCount( int count );
	
	private:

	Contact	_contacts[8];
	int	_count;
};

#endif