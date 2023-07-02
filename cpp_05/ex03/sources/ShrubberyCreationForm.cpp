/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:25:01 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 14:36:46 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137, "target")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) : AForm("ShrubberyCreationForm", 145, 137, other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = other;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
	return ;
}

void ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
	AForm::execute(executor);
	std::ofstream outfile((this->_target + "_shrubbery").c_str());
	if (outfile.fail())
		throw FileOpenException();
	outfile << "	           ,@@@@@@@," << std::endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o" << std::endl;
	outfile << "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'" << std::endl;
	outfile << "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'" << std::endl;
	outfile << "   %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'" << std::endl;
	outfile << "   `&%/ ` /%&'    |.|         | |8'" << std::endl;
	outfile << "       |o|        | |         |'|" << std::endl;
	outfile << "       |.|        | |         | |" << std::endl;
	outfile << "  __//_|.|__//____| |__//__//_| |_//__" << std::endl;
	outfile.close();
	return ;
}