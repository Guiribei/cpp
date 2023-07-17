/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:12:38 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/16 22:47:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

class BitcoinExchange
{
	public:
	
	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const & src );
	BitcoinExchange & operator=( BitcoinExchange const & rhs );
	~BitcoinExchange( void );
	
	
};

#endif