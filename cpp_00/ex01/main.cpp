/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:28:14 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/07 17:28:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			registered_contacts;
	int			i;
	std::string	input;

	registered_contacts = -1;
	while (true)
	{
		input.clear();
		std::cout << "What action do you want to take (ADD, SEARCH, EXIT)?" << std::endl;
		std::getline(std::cin, input);
		if (input == "")
			return -1;
		i = 0;
		while (input[i])
		{
			input[i] =  std::toupper(input[i]);
			i++;
		}
		if (input == "ADD")
		{
			if (registered_contacts == -1)
				registered_contacts = 0;
			phonebook.addContact(registered_contacts);
			registered_contacts++;
			if (registered_contacts >= 8)
				registered_contacts = 0;
		}
		else if (input == "SEARCH")
		{
			if (registered_contacts == -1)
			{
				std::cout << "There are no contacts yet" << std::endl;
				continue;
			}
			phonebook.searchContact();
		}
		else if (input == "EXIT")
			std::exit(0);
	}
	return (0);
}
