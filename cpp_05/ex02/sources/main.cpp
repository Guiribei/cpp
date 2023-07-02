/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:55 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/02 16:42:26 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat random("Someone", 150);
	try
	{
		random.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat officer("Officer", -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat officer("Officer", 120);
	ShrubberyCreationForm shru("home");
	
	officer.executeForm(shru);
	officer.signForm(shru);
	officer.executeForm(shru);
	officer.signForm(shru);
	
	RobotomyRequestForm robo("robotomy");
	Bureaucrat agent("Agent", 44);
	
	agent.executeForm(robo);
	agent.signForm(robo);
	officer.executeForm(robo);
	agent.executeForm(robo);

	PresidentialPardonForm pardom("Joe");
	Bureaucrat secretary("secretary", 4);
	
	secretary.signForm(pardom);
	secretary.executeForm(pardom);

	
	return(0);
}