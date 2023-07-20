/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:12:38 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/19 22:46:51 by guribeir         ###   ########.fr       */
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
	
	static std::map<std::string, double> prices;
	
	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const & src );
	BitcoinExchange & operator=( BitcoinExchange const & rhs );
	~BitcoinExchange( void );
	
	public:
	
	static void executeExchange(char *filename );
	static void readPrices( void );
	
	class InvalidFileException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif