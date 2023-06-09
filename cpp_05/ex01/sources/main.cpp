/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:55 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 18:56:01 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat teacher("Teacher", 3);
	Bureaucrat monitor("Monitor", 10);
	Form		exam("Math Exam", 5, 3);

	std::cout << teacher;
	std::cout << exam;

	monitor.signForm(exam);
	teacher.signForm(exam);
	teacher.signForm(exam);
	
	std::cout << exam;
}