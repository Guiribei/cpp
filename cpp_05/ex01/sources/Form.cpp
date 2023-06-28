/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:00:36 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/27 21:39:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form( void ) : _name("Default Form"), _gradeToSign(150), _gradeToExecute(150)
{
	this->_isSigned = false;
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form( std::string name, const int gradeToSign, const int gradeToExecute ) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
	else if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	this->_isSigned = false;
	std::cout << "Form constructor called" << std::endl;
	return ;
}

Form::~Form( void )
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

Form::Form( const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = other;
	return ;
}

Form &Form::operator=( const Form &other)
{
	if (this != &other)
	{
		const_cast <std::string &>(this->_name) = other._name;
		const_cast <int &>(this->_gradeToSign) = other._gradeToSign;
		const_cast <int &>(this->_gradeToExecute) = other._gradeToExecute;
		this->_isSigned = other._isSigned;
	}
	std::cout << "Form Assignment operator called" << std::endl;
	return (*this);
}

std::string Form::getName( void ) const
{
	return (this->_name);
}

bool Form::getIsSigned( void ) const
{
	return (this->_isSigned);
}

const int &Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

const int &Form::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

void Form::beSigned( Bureaucrat bur)
{
	if (bur.getGrade() <= this->_gradeToSign)
	{
		this->_isSigned = true;
		std::cout << "Form signed" << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator<<( std::ostream &os, const Form &form)
{
	os << "Form " << form.getName() << ", is signed: " << form.getIsSigned() <<
	", grade to sign: " << form.getGradeToSign() << ", grade to execute: " <<
	form.getGradeToExecute() << std::endl;
	return (os);
}
