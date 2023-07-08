/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:06:36 by guribeir          #+#    #+#             */
/*   Updated: 2023/07/07 18:17:21 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class Serializer
{
	private:
	Serializer ( void );
	~Serializer ( void );	
	Serializer ( Serializer const &other );
	Serializer & operator=( Serializer const &other );
	
	public:

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif