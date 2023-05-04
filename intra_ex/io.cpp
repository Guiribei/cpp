/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:28:22 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/02 21:33:11 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello World !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}