/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:16:57 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/14 13:27:33 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		guy;
	int			i;
	std::string	new_argv;
	std::string	options[] = {"ERROR", "WARNING", "INFO", "DEBUG"};

	if (argc != 2)
		return (printError("Invalid number of arguments"));
	new_argv = std::string(argv[1]);
	i = 0;
	while (i < 4)
	{
		if (new_argv == options[i])
			break ;
		i++;
	}
	switch (i)
	{
	case 3:
		while (i >= 0)
		{
			guy.complain(options[i]);
			i--;
		}
		break;
	case 2:
		while (i >= 0)
		{
			guy.complain(options[i]);
			i--;
		}
		break;
	case 1:
		while (i >= 0)
		{
			guy.complain(options[i]);
			i--;
		}
		break;
	case 0:
		while (i >= 0)
		{
			guy.complain(options[i]);
			i--;
		}
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}