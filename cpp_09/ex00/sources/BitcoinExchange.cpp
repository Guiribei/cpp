/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:26 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/18 21:03:35 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char *BitcoinExchange::InvalidFileException::what() const throw()
{
	return "Error: could not open file.";
}

BitcoinExchange::BitcoinExchange( void )
{
	std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = src;
}

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	std::cout << "BitcoinExchange assignation operator called" << std::endl;
	(void)rhs;
	return *this;
}

static bool parseDate( std::string date )
{
	int year, month, day;
	
	if (!(date.length() < 12 && date.length() > 9))
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	std::istringstream(date.substr(0,4)) >> year;
	std::istringstream(date.substr(5,2)) >> month;
	std::istringstream(date.substr(8,2)) >> day;
	if (year < 2009 || year > 2023)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	return true;
}

static void parseValue( std::string value )
{
	int i = 0;
	double nb;

	while(value[i] == ' ')
		i++;
	if (value[i] == '-')
	{
		std::cout << "Error: not a positive number." << std::endl;
		return ;
	}
	i = 0;
	while(value[i])
	{
		while(value[i] == ' ')
			i++;
		if ((value[i] < '0' || value[i] > '9') && value[i] != '.')
		{
			std::cout << "Error: not a number." << std::endl;
			return ;
		}
		i++;
	}
	std::istringstream(value) >> nb;
	if (nb > 2147483647)
	{
		std::cout << "Error: too large a number." << std::endl;
		return ;
	}
}


static bool checkLine( std::string line )
{
	std::string date, value;
	
	if (line.length() < 12)
		return false;
	if (line[4] != '-' || line[7] != '-')
		return false;
	if (line.find('|') == std::string::npos)
		return false;
	return true;
}

void BitcoinExchange::checkFile( char *filename )
{
	std::ifstream file(filename);
	std::string line;
	
	if (!file.is_open())
		throw BitcoinExchange::InvalidFileException();
	while (std::getline(file, line))
	{
		if (!checkLine(line))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, line.find('|'));
		std::string value = line.substr(line.find('|') + 1, line.length());
		if (!parseDate(date))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		parseValue(value);
	}
	
}