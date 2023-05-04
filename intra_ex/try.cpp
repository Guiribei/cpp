/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:38:11 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:43:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "static_sample.hpp"

void	f0(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	return;
}

void	f1(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();
	
	return;
}

int	main(void)
{
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return (0);
}
