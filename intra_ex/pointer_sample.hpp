/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_sample.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:48:15 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 22:08:45 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINTER_SAMPLE_HPP
#define POINTER_SAMPLE_HPP

#include <iostream>

class	Sample
{
	public:

	int	foo;

	Sample(void);
	~Sample(void);
	
	void	bar(void) const;
};

#endif