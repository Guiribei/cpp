/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:26 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/20 20:56:41 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::prices;

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

static bool parseValue( std::string value )
{
	int i = 0;
	double nb;

	while(value[i] == ' ')
		i++;
	if (value[i] == '-')
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	i = 0;
	while(value[i])
	{
		while(value[i] == ' ')
			i++;
		if ((value[i] < '0' || value[i] > '9') && value[i] != '.')
		{
			std::cout << "Error: not a number." << std::endl;
			return false;
		}
		i++;
	}
	std::istringstream(value) >> nb;
	if (nb > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
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
	if (line[line.find('|') + 1] != ' ' || line[line.find('|') - 1] != ' ')
		return false;
	return true;
}

static double closestValue(const std::map<std::string, double>& prices, const std::string& date) 
{
    std::map<std::string, double>::const_iterator it = prices.upper_bound(date);

    if (it == prices.begin() || it->first == date)
        return it->second;
    std::map<std::string, double>::const_iterator prev = it;
    --prev;
    return prev->second;
}

void BitcoinExchange::executeExchange( char *filename )
{
	std::ifstream file(filename);
	std::string line;
	
	if (!file.is_open())
		throw BitcoinExchange::InvalidFileException();
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	while (std::getline(file, line))
	{
		if (!checkLine(line))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, line.find('|') - 1);
		std::string value = line.substr(line.find('|') + 2, line.length());
		if (!parseDate(date))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (!parseValue(value))
			continue;
		std::string initialDate = "2009-01-02";
		std::string finalDate = "2022-03-29";
		double valueDouble = atof(value.c_str());
		double closest = closestValue(BitcoinExchange::prices, date);
		std::cout << date << " => " << valueDouble << " = " << closest * valueDouble << std::endl;
	}
	file.close();
	return ;
}

void BitcoinExchange::readPrices( void )
{
	std::ifstream data("data.csv");
	std::string line;
	
	if (!data.is_open())
		throw BitcoinExchange::InvalidFileException();
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::istringstream iss(line);
		std::string date, valueStr;

		if (!getline(iss, date, ',') || !getline(iss, valueStr))
			continue;
		double value = atof(valueStr.c_str());
		BitcoinExchange::prices[date] = value;
	}
}