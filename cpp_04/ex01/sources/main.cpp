/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:30:05 by guribeir          #+#    #+#             */
/*   Updated: 2023/06/20 16:18:14 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	delete dog;
	delete cat;

	std::cout << "___________________________________________\n" << std::endl;

	Animal	*arr[10];

	for (int i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (int i = 5; i < 10; i++)
		arr[i] = new Cat();

	std::cout << "Now deleting!" << std::endl;

	for(int i = 0; i < 10; i++)
   		delete arr[i];
	
	std::cout << "___________________________________________\n" << std::endl;
	
	Cat myCat;
	myCat.setIdea(0, (std::string)"LASAGNA!");
	Cat yourCat = myCat;
	std::cout << "My cat: " << myCat.getIdea(0) << std::endl;
	std::cout << "Your cat: " << yourCat.getIdea(0) << std::endl;
	yourCat.setIdea(0, (std::string)"Cows shouldn't fly");
	std::cout << "Your cat: " << yourCat.getIdea(0) << std::endl;
	std::cout << "My cat: " << myCat.getIdea(0) << std::endl;

	Dog myDog;
	Dog yourDog = myDog;
	
	yourDog.setIdea(0, (std::string)"Auuuuu");
	std::cout << "My Dog: " << myDog.getIdea(0) << std::endl;
	std::cout << "Your Dog: " << yourDog.getIdea(0) << std::endl;
	
	return (0);
}
