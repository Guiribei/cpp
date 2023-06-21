/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:51:41 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 21:38:21 by guribeir         ###   ########.fr       */
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

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
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

std::ostream &operator<<( std::ostream &os, const Bureaucrat &bur)
{
	os << "Name: " << bur.getName() << "\n";
	os << "Grade: " << bur.getGrade() << "\n";
	return (os);
}