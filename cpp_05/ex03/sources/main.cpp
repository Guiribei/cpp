/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:55 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 20:47:53 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Bureaucrat b1("B1", 150);
	Bureaucrat b2("B2", 5);
	AForm *rrf;
	AForm *ppf;
	
	try
	{
		rrf = someRandomIntern.makeForm("invalid request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		b1.signForm(*rrf);
		b1.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		ppf = someRandomIntern.makeForm("presidential pardon", "Havs");
		b2.signForm(*ppf);
		b2.executeForm(*ppf);
		delete ppf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}