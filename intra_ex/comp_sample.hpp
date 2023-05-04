/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_sample.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:04:11 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:10:05 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMP_SAMPLE_HPP
#define COMP_SAMPLE_HPP

#include <iostream>

class Sample
{
	public:

	Sample(int value);
	~Sample(void);


	int	getFoo(void) const;
	int	compare(Sample * other) const;

	private:

	int _foo;
	
};

#endif