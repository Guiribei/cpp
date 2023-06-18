/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/17 22:18:39 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	joe;
	Animal	*bob = new Animal();
	Animal	*cat1 = new Cat();
	Animal	*dog1 = new Dog();
	Dog		dog2;
	Cat		cat2;

	joe.makeSound();
	cat1->makeSound();
	dog1->makeSound();
	bob->makeSound();
	cat2.makeSound();
	dog2.makeSound();

	delete bob;
	delete cat1;
	delete dog1;
	
	return (0);
}
