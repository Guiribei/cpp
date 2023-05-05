/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:33:02 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/04 22:11:04 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
	return ;
}
PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::getCount( void ) const
{
	return this->_count;
}

void		PhoneBook::setCount( int count )
{
	this->_count = count;
}

void	PhoneBook::addContact(int index)
{
	std::string	buff;
	index = 0;

	std::cout << "---Now You're going to add a new contact---" << std::endl;
	while (!buff[0])
	{
		std::cout << "Enter first name:" << std::endl;
		std::getline(std::cin, buff);
	}
	this->_contacts[index].setFirstName(buff);

	buff.clear();
	while (!buff[0])
	{
		std::cout << "Enter last name:" << std::endl;
		std::getline(std::cin, buff);
	}
	this->_contacts[index].setLastName(buff);
	
	buff.clear();
	while (!buff[0])
	{
		std::cout << "Enter nickname:" << std::endl;
		std::getline(std::cin, buff);
	}
	this->_contacts[index].setNickname(buff);
	
	buff.clear();
	while (!buff[0])
	{
		std::cout << "Enter phone number:" << std::endl;
		std::getline(std::cin, buff);
	}
	this->_contacts[index].setPhoneNumber(buff);
	
	buff.clear();
	while(!buff[0])
	{
		std::cout << "Enter darkest secret:" << std::endl;
		std::getline(std::cin, buff);
	}
	this->_contacts[index].setDarkestSecret(buff);
	if (this->_count <= 8)
		this->_count++;
}

void	PhoneBook::searchContact(void)
{
	int	i;

	i = 0;
	while (i < this->_count)
	{
		std::cout << "Deu boaa!" << std::endl;
		i++;
	}
}

