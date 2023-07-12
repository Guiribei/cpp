/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:12:23 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/11 19:58:43 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::logic_error("Integer not found");
	return (it);
}

#endif