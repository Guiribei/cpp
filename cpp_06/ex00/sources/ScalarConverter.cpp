/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:48:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/05 22:59:50 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return ;
}

ScalarConverter::~ScalarConverter( void )
{
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &other )
{
	*this = other;
	return ;
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter const &other )
{
	(void)other;
	return (*this);
}

static int getType(char *input) // TODO
{
	(void)input;
	return (0);
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
	std::cout << "float: " << std::fixed << std::setprecision(1) << ft << "f" << std::endl;
}

static void printDouble( double db)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << db << std::endl;
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
	if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max())
		std::cout << "char: Non displayable" << std::endl;
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
	else if (ft < std::numeric_limits<char>::min() || ft > std::numeric_limits<char>::max())
		std::cout << "char: Non displayable" << std::endl;
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
	else if (db < std::numeric_limits<char>::min() || db > std::numeric_limits<char>::max())
		std::cout << "char: Non displayable" << std::endl;
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