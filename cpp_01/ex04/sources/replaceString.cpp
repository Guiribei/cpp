/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:01:51 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/10 23:02:00 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	replaceString(const std::string& line, const std::string from, const std::string to)
{
	std::string		result;
	size_t			position;

	result = line;
	position = 0;
	while ((position = result.find(from, position)) != std::string::npos)
	{
		result.erase(position, from.length());
		result.insert(position, to);
		position += to.length();
	}
	return (result);
}
