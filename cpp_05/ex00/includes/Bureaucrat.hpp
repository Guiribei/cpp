/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:56 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 21:42:01 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:

	std::string _name;
	int			_grade;

	public:

	Bureaucrat( void );
	~Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat &other );
	Bureaucrat &operator=( const Bureaucrat &other);
	std::string getName( void ) const;
	void setName( std::string const &name );
	int getGrade( void ) const;
	void setGrade( int const &grade );
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur);

#endif