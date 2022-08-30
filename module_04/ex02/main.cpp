/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:39:50 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 16:02:55 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int	main(void)
{
	{
		const Animal*	dog = new Dog();
		const Animal*	cat = new Cat();

		delete dog;
		delete cat;
	}
	{
		Dog	dog;
		Dog	dog2(dog);
	
		dog.getBrain()->setIdea(0, "Bark at night");
		dog2.getBrain()->setIdea(0, "Bark at sunshine");
		std::cout << dog.getBrain()->getIdea(0) << std::endl;
		std::cout << dog2.getBrain()->getIdea(0) << std::endl;
	}
	{
		Cat	cat;
		Cat	cat2(cat);
	
		cat.getBrain()->setIdea(0, "Meow at night");
		cat2.getBrain()->setIdea(0, "Meow at sunshine");
		std::cout << cat.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
	}
	{
		Animal	*animals[100];
		for (int i=0; i < 100; i++) {
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for (int i=0; i < 100; i++)
			delete animals[i];
	}

	return (0);
}
