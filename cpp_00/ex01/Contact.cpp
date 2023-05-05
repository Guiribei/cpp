/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:32:13 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/04 22:07:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}
Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getFirstName( void ) const
{
	return this->_firstName;
}

void		Contact::setFirstName( std::string firstName )
{
	this->_firstName = firstName;
}

std::string	Contact::getLastName( void ) const
{
	return this->_lastName;
}

void		Contact::setLastName( std::string lastName )
{
	this->_lastName = lastName;
}

std::string	Contact::getNickname( void ) const
{
	return this->_nickname;
}

void		Contact::setNickname( std::string nickname )
{
	this->_nickname = nickname;
}

std::string	Contact::getPhoneNumber( void ) const
{
	return this->_phoneNumber;
}
void		Contact::setPhoneNumber( std::string phoneNumber )
{
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) const
{
	return this->_darkestSecret;
}

void		Contact::setDarkestSecret( std::string darkestSecret )
{
	this->_darkestSecret = darkestSecret;
}
