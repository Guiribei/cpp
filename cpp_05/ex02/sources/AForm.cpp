/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 21:00:36 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 11:48:29 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm( void ) : _name("Default AForm"), _gradeToSign(150), _gradeToExecute(150)
{
	this->_isSigned = false;
	this->_target = "Default Target";
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm( std::string name, const int gradeToSign, const int gradeToExecute, std::string target ) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw AForm::GradeTooLowException();
	}
	else if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw AForm::GradeTooHighException();
	}
	this->_isSigned = false;
	std::cout << "AForm constructor called" << std::endl;
	return ;
}

AForm::~AForm( void )
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

AForm::AForm( const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = other;
	return ;
}

AForm &AForm::operator=( const AForm &other)
{
	if (this != &other)
	{
		const_cast <std::string &>(this->_name) = other._name;
		const_cast <int &>(this->_gradeToSign) = other._gradeToSign;
		const_cast <int &>(this->_gradeToExecute) = other._gradeToExecute;
		this->_isSigned = other._isSigned;
		this->_target = other._target;
	}
	std::cout << "AForm Assignment operator called" << std::endl;
	return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("The grade value is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade value is too low");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("The form is not signed");
}

const char* AForm::FileOpenException::what() const throw()
{
	return ("The file could not be opened");
}

std::string AForm::getName( void ) const
{
	return (this->_name);
}

int AForm::getGrade( void ) const
{
	return (this->_gradeToSign);
}

bool AForm::getIsSigned( void ) const
{
	return (this->_isSigned);
}

const int &AForm::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

const int &AForm::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned( Bureaucrat &bur)
{
	if (bur.getGrade() <= this->_gradeToSign)
	{
		this->_isSigned = true;
		std::cout << bur.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

void AForm::execute( Bureaucrat const &executor) const
{
	if (this->_isSigned == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<( std::ostream &os, const AForm &form)
{
	if (form.getIsSigned())
	{
		os << "AForm " << form.getName() << ", is signed. " <<
		"Minimal grade to sign: " << form.getGradeToSign() << ", grade to execute: " <<
		form.getGradeToExecute() << std::endl;
	}
	else
	{
		os << "AForm " << form.getName() << ", is not signed" <<
		", grade to sign: " << form.getGradeToSign() << ", grade to execute: " <<
		form.getGradeToExecute() << std::endl;
	}
	return (os);
}
