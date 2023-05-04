/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_sample.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:26:41 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:32:42 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATIC_SAMPLE_HPP
#define STATIC_SAMPLE_HPP

#include <iostream>

class Sample
{
	public:

	Sample(void);
	~Sample(void);

	static int	getNbInst(void);

	private:
	
	static int	_nbInst;
};

#endif