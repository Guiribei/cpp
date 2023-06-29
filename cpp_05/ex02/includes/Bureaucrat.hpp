/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:56 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 20:04:02 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
	private:

	std::string _name;
	int			_grade;

	public:

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("The grade value is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("The grade value is too low");
		}
	};

	Bureaucrat( void );
	~Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat &other );
	Bureaucrat &operator=( const Bureaucrat &other);
	std::string getName( void ) const;
	void setName( std::string const &name );
	int getGrade( void ) const;
	void setGrade( int const &grade );
	void incrementGrade( void );
	void decrementGrade( void );
	void signForm( AForm &form );
	//void executeForm( AForm const &form );
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur);

#endif