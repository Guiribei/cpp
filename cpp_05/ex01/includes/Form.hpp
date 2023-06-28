/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:59:04 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/27 21:28:38 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
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
	
	Form( void );
	~Form( void );
	Form(std::string name, const int gradeToSign, const int gradeToExecute);
	Form( const Form &other);
	Form &operator=( const Form &other );
	std::string getName( void ) const;
	bool getIsSigned( void ) const;
	const int& getGradeToSign( void ) const;
	const int& getGradeToExecute( void ) const;
	void beSigned( Bureaucrat bureaucrat );
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif