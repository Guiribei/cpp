/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:04:01 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 20:28:42 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern( void )
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern( const Intern &other )
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern	&Intern::operator=( const Intern &other )
{
	std::cout << "Intern assignation operator called" << std::endl;
	(void)other;
	return (*this);
}

const char *Intern::InvalidFormException::what() const throw()
{
	return ("Invalid Form");
}

static AForm *makePresidentialPardonForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}

static AForm *makeRobotomyRequestForm( std::string target )
{
	return (new RobotomyRequestForm(target));
}

static AForm *makeShrubberyCreationForm( std::string target )
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm( std::string name, std::string target )
{
	AForm *(*functions[3])(std::string) = {makePresidentialPardonForm, makeRobotomyRequestForm, makeShrubberyCreationForm};
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (functions[i](target));
		}
	}
	throw Intern::InvalidFormException();
	return (NULL);
}