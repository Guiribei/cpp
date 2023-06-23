/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:59:04 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/22 21:24:17 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FILE_HPP
#define FILE_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
	
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

	public:
	
	Form( void );
	~Form( void );
	Form(std::string name, const int gradeToSign, const int gradeToExecute);
	Form( const Form &other);
	Form &operator=( const Form &other );
	std::string getName( void ) const;
	bool getIsSigned( void ) const;
	const int getGradeToSign( void ) const;
	const int getGradeToExecute( void ) const;
	void beSigned( Bureaucrat bureaucrat );
};


#endif