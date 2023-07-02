/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:48:33 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 15:49:11 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm &other );
	PresidentialPardonForm &operator=( const PresidentialPardonForm &other );
	void execute( Bureaucrat const &executor ) const;
	
};

#endif