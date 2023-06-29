/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:59:04 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 20:03:59 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
	
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

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
	
	AForm( void );
	~AForm( void );
	AForm(std::string name, const int gradeToSign, const int gradeToExecute);
	AForm( const AForm &other);
	AForm &operator=( const AForm &other );
	std::string getName( void ) const;
	bool getIsSigned( void ) const;
	const int& getGradeToSign( void ) const;
	const int& getGradeToExecute( void ) const;
	void beSigned( Bureaucrat &bur );
	virtual void execute( Bureaucrat const &executor ) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif