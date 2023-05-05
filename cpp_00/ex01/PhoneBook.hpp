/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:32:41 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/04 22:06:58 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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

class	PhoneBook
{
	public:

	PhoneBook(void);
	~PhoneBook(void);

	Contact	_contacts[8];
	
	void	addContact(int index);
	void	searchContact(void);
	int		getCount( void ) const;
	void	setCount( int count );
	
	private:

	int	_count;
};

#endif