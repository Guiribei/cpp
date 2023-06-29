/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:24:28 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 20:18:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
	
	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm &other );
	ShrubberyCreationForm &operator=( const ShrubberyCreationForm &other );
	void execute( Bureaucrat const &executor ) const;
	
};

#endif