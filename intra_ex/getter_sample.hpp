/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettter_sample.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:19:04 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 20:23:00 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETTER_SAMPLE_HPP
#define GETTER_SAMPLE_HPP

#include <iostream>

class Sample
{
	public:
	
	Sample(void);
	~Sample(void);

	int		getFoo(void) const;
	void	setFoo(int value);

	private:

	int	_foo;
};

#endif