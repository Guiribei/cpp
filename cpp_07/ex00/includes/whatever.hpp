/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:19:32 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 16:33:17 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &first, T &second)
{
	T temp;

	temp = first;
	first = second;
	second = temp;
}

template <typename T>
const T	&min(T const &first, T const &second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

template <typename T>
const T	&max(T const &first, T const &second)
{
	if (first > second)
		return (first);
	else
		return (second);
}


#endif