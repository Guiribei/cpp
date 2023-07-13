/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:13:47 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/12 23:22:57 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:

		unsigned int		_n;
		std::vector<int>	_vec;
		
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);
		Span &operator=(Span const &src);
		void addNumber( int n );
		void addNumbers( std::vector<int>::iterator start, std::vector<int>::iterator end );
		int &operator[](int i);
		//int shortestSpan( void );
		//int longestSpan( void );
		class FullArrayException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif