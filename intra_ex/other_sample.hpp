/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_sample.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:15:09 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 18:24:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_SAMPLE_HPP
#define OTHER_SAMPLE_HPP

#include <iostream>

class Sample
{
	public:
	
	int public_foo;
	
	Sample(void);
	~Sample(void);

	void	publicBar(void) const;

	private:
	
	int		_private_foo;
	
	void	_privateBar(void) const;
};

#endif