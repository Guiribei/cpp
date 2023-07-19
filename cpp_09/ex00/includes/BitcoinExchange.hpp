/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:12:38 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/18 20:46:55 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange
{
	private:
	
	std::map<std::string, double> prices;
	
	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const & src );
	BitcoinExchange & operator=( BitcoinExchange const & rhs );
	~BitcoinExchange( void );
	
	public:
	
	static void checkFile( char *filename );
	static void readPrices( char *filename );
	static void printPrices( void );
	
	class InvalidFileException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif