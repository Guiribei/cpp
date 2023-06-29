/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:55 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/29 20:08:36 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat officer("Officer", 60);
	ShrubberyCreationForm shru;
	
	shru.execute(officer);
	officer.signForm(shru);
}