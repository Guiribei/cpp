/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:33:34 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 16:51:13 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
	public:
	
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm &other );
	RobotomyRequestForm &operator=( const RobotomyRequestForm &other );
	void execute( Bureaucrat const &executor ) const;
	
};

#endif