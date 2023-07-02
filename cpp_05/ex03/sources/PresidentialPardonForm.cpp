/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:48:24 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 15:51:45 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5, "target")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	this->_target = "default";
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &other ) : AForm("PresidentialPardonForm", 25, 5, other._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = other;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm parameter constructor called" << std::endl;
	return ;
}

void PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}