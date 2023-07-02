/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:34:27 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 16:56:03 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45, "target")
{
	std	::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &other ) : AForm("RobotomyRequestForm", 72, 45, other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = other;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	AForm::execute(executor);
	std::cout << "*some drilling noises*" << std::endl;
	std::srand(std::time(0));
	int nb = std::rand() % 2;
	if (nb)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}