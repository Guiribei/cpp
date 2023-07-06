/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:48:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/06 20:30:19 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const &other )
{
	std::cout << "Assignation operator called" << std::endl;
	(void)other;
	return (*this);
}

static bool getChar( const std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		return (true);
	return (false);
}

static bool getInt(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if (!std::isdigit(str[i]))
			return false;
	}
	if (str.length() > 11 && (str[0] != '-' || str.length() > 12))
		return false;
	return true;
}

static bool getFloat( const std::string &str )
{
	bool dot = false;
	bool f = false;

	if (str.compare("nanf") == 0 || str.compare("+inff") == 0 || str.compare("-inff") == 0)
		return true;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if(i == str.length()-1 && str[i] == 'f')
		{
			f = true;
			continue;
		}
		if (str[i] == '.')
		{
			if (dot)
				return false;
			dot = true;
			continue;
		}
		if (!std::isdigit(str[i]) && !(i == str.length()-1 && str[i] == 'f'))
			return false;
	}
	if (!dot || !f)
		return false;
	return true;
}

static bool getDouble( const std::string &str)
{
	bool dot = false;

	if (str.compare("nan") == 0 || str.compare("+inf") == 0 || str.compare("-inf") == 0)
		return true;
	for (size_t i = 0; i < str.length(); i++)
	{
		if(i == 0 && str[i] == '-')
			continue;
		if (str[i] == '.')
		{
			if (dot)
				return false;
			dot = true;
			continue;
		}
		if (!std::isdigit(str[i]))
			return false;
	}
	if (!dot)
		return false;
	return true;
}

static int getType(char *input)
{
	std::string str = input;
	
	if (str.empty())
		return (WRONG);
	if (getChar(str))
		return (CHAR);
	if (getInt(str))
		return (INT);
	if (getFloat(str))
		return (FLOAT);
	if (getDouble(str))
		return (DOUBLE);
	return (WRONG);
}

static void printChar( char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
}

static void printInt( int i)
{
	std::cout << "int: " << i << std::endl;
}

static void printFloat( float ft)
{
	std::cout << "float: " << std::fixed << std::setprecision(2) << ft << "f" << std::endl;
}

static void printDouble( double db)
{
	std::cout << "double: " << std::fixed << std::setprecision(2) << db << std::endl;
}

static bool checkOverFlow( char *input)
{
	long int num = std::atol(input);
	
	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		printFloat(static_cast<float>(num));
		printDouble(static_cast<double>(num));
		return (true);
	}
	return (false);
}

static void convertChar( char *input )
{
	char c = input[0];

	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

static void convertInt( char *input )
{
	if (checkOverFlow(input))
		return ;
	int num = std::atoi(input);
	if (num < 32 || num > 126)
	{
		if (num > 255)
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		printChar(static_cast<char>(num));
	printInt(num);
	printFloat(static_cast<float>(num));
	printDouble(static_cast<double>(num));
}

static void convertFloat( char *input )
{
	float ft = std::strtof(input, NULL);
	
	if (std::isnan(ft) || std::isinf(ft))
		std::cout << "char: impossible" << std::endl;
	else if (ft < 32 || ft > 126)
	{
		if (ft > 255)
			std::cout << "char: impossible" << std::endl;
		else 
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		printChar(static_cast<char>(ft));
	if (ft < std::numeric_limits<int>::min() || ft > std::numeric_limits<int>::max() || std::isnan(ft) || std::isinf(ft))
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast<int>(ft));
	printFloat(ft);
	printDouble(static_cast<double>(ft));
}

static void convertDouble( char *input )
{
	double db = std::strtod(input, NULL);
	
	if (std::isnan(db) || std::isinf(db))
		std::cout << "char: impossible" << std::endl;
	else if (db < 32 || db > 126)
	{
		if (db > 255)
			std::cout << "char: impossible" << std::endl;
		else
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		printChar(static_cast<char>(db));
	if (db < std::numeric_limits<int>::min() || db > std::numeric_limits<int>::max() || std::isnan(db) || std::isinf(db))
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast<int>(db));
	if (db < std::numeric_limits<float>::min() || db > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		printFloat(static_cast<float>(db));
	printDouble(db);
}

static void wrongInput( void )
{
	std::cerr << "Error: Invalid input." << std::endl;
	return ;
}

void ScalarConverter::convert( char *input )
{
	int type = getType(input);
	
	switch (type)
	{
	case CHAR:
		convertChar(input);
		break;
	case INT:
		convertInt(input);
		break;
	case FLOAT:
		convertFloat(input);
		break;
	case DOUBLE:
		convertDouble(input);
		break;
	default:
		wrongInput();
	}
}