/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:53:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/03 21:58:59 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pointer_sample.hpp"

int	main(void)
{
	Sample		instance;
	Sample *	instancep = &instance;

	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo;
	
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}