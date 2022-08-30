/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:39:50 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 12:28:53 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int	main(void)
{
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	delete dog;
	delete cat;

	return (0);
}
