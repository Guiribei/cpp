/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:49:01 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/05 20:52:27 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits>

class ScalarConverter
{
	private:
	
	ScalarConverter( void );
	~ScalarConverter( void );
	ScalarConverter( ScalarConverter const &other );
	ScalarConverter & operator=( ScalarConverter const &other );

	public:
	
	static void convert( char *input );		
};

#endif