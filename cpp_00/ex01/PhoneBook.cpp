/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:33:02 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/07 17:28:18 by guribeir         ###   ########.fr       */
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
	if (this->_count < 8)
		this->_count++;
}

static void	printTable(int iterations, Contact *contacts)
{
	int			i;
	std::string	first;
	std::string	last;
	std::string	nick;

	std::cout << std::endl;
	std::cout << "---You can choose one of the following contacts---" << std::endl;
	i = 0;
	while (i < iterations)
	{
		first.clear();
		last.clear();
		nick.clear();
		first = contacts[i].getFirstName();
		last = contacts[i].getLastName();
		nick = contacts[i].getNickname();
		if (first.length() > 10)
		{
			first.resize(9);
			first += '.';
		}
		if (last.length() > 10)
		{
			last.resize(9);
			last += '.';
		}
		if (nick.length() > 10)
		{
			nick.resize(9);
			nick += '.';
		}
		std::cout.width (10);
		std::cout << i + 1 << "|";
		std::cout.width (10);
		std::cout << first << "|";
		std::cout.width (10);
		std::cout << last << "|";
		std::cout.width (10);
		std::cout << nick << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

static bool	isInteger(const std::string &str)
{
	std::size_t	i;

	i = 0;
	if (str.empty())
		return false;
	while (i < str.size())
	{
		if (!std::isdigit(str[i]))
			return false;
		++i;
	}
	return true;
}

void PhoneBook::searchContact(void)
{
	int option;
	std::string input;

	printTable(this->_count, this->_contacts);
	while (true)
	{
		std::cout << "Enter the contact index you want to search: ";
		std::getline(std::cin, input);
		if (isInteger(input))
		{
			std::istringstream(input) >> option;
				option -= 1;
			if ((option < this->_count && option >= 0))
				break;
			std::cout << "Invalid input. Please enter a number." << std::endl;
		}
		else
			std::cout << "Invalid input. Please enter a number." << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Contact " << option + 1 << " information: " << std::endl;
	std::cout << std::endl;
	std::cout << _contacts[option].getFirstName() << std::endl;
	std::cout << _contacts[option].getLastName() << std::endl;
	std::cout << _contacts[option].getNickname() << std::endl;
	std::cout << _contacts[option].getPhoneNumber() << std::endl;
	std::cout << _contacts[option].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
