/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:35:39 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/09 18:32:46 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *address, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(address[i]);
	}
}

template <typename T>
void	iter(T *address, size_t size, void (*f)(const T &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(address[i]);
	}
}

#endif