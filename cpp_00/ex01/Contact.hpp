/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:49:20 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/14 17:50:10 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
	
	Contact( void );
	~Contact( void );

	std::string	getFirstName( void ) const;
	void		setFirstName( std::string firstName );

	std::string	getLastName( void ) const;
	void		setLastName( std::string lastName );

	std::string	getNickname( void ) const;
	void		setNickname( std::string nickname );

	std::string	getPhoneNumber( void ) const;
	void		setPhoneNumber( std::string phoneNumber );

	std::string	getDarkestSecret( void ) const;
	void		setDarkestSecret( std::string darkestSecret );

	private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif