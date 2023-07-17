/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:14:26 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 22:49:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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