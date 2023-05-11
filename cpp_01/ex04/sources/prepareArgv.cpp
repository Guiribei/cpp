/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepareArgv.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:01:10 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/10 23:01:20 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	*prepareArgv(char **argv, int argc)
{
	int			i;
	std::string	*args;

	args = new std::string[argc];
	i = 0;
	while(argv[i])
	{
		args[i]= std::string(argv[i]);
		i++;	
	}
	if (i != 4)
		return (NULL);
	return (args);
}
