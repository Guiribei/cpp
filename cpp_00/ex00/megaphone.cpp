/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:36:04 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/04 20:28:17 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	capitalize_and_print(std::string str)
{
	size_t	i;
	char	letter;

	i = 0;
	while (i < str.length())
	{
		letter = std::toupper(str[i]);
		std::cout << letter;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	std::string	str;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		str = argv[i];
		if (str == "")
			continue ;
		capitalize_and_print(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
