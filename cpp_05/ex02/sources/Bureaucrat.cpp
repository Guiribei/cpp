/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:41 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 19:19:35 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	this->_name = "Default Bureaucrat";
	this->_grade = 150;
	std::cout << "Constructor default called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = grade;
	std::cout << "Constructor default called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
	return ;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::setName( std::string const &name)
{
	this->_name = name;
}

void Bureaucrat::setGrade( int const &grade )
{
	this->_grade = grade;
}

void Bureaucrat::incrementGrade( void )
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade( void )
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::signForm( AForm &form )
{
	if (form.getIsSigned() == true)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because it's already signed." << std::endl;
	}
	else
	{
		try
		{
			form.beSigned(*this);
		}
		catch(const std::exception& e)
		{
			std::cerr << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

std::ostream &operator<<( std::ostream &os, const Bureaucrat &bur)
{
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << "." << std::endl;
	return (os);
}
