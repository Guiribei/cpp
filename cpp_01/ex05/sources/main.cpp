/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:16:57 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/14 12:30:15 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	guy;

	std::cout << "Guy Debug: " << std::endl;
	guy.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Guy Info: " << std::endl;
	guy.complain("INFO");
	std::cout << std::endl;
	std::cout << "Guy Warning: " << std::endl;
	guy.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Guy Error: " << std::endl;
	guy.complain("ERROR");
	std::cout << std::endl;
	std::cout << "Invalid Complain: " << std::endl;
	guy.complain("INVALID");
	std::cout << std::endl;
	return (0);
}