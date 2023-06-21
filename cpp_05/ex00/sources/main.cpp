/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:38:55 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 21:41:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat dale("neles", 2);

	std::cout << dale.getGrade() << std::endl;
	std::cout << dale.getName() << std::endl;
	return (0);
}