/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:02:11 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/23 15:18:32 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <algorithm>

class RPN
{
	private:

	static std::stack<int>		_stack;

	RPN ( void );
	RPN ( RPN const & src );
	RPN & operator=( RPN const & src );
	~RPN ( void );

	public:

	static void calculate( std::string input );

	class InvalidInputException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class ZeroDivisionException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif