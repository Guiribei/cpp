/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:01:02 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 18:03:46 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:

	class InvalidFormException : public std::exception
	{
		public: 
			virtual const char* what() const throw();
	};

	Intern( void );
	~Intern( void );
	Intern( const Intern &other );
	Intern	&operator=( const Intern &other );
	
	AForm *makeForm( std::string form, std::string target );
};

#endif