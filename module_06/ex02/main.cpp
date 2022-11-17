/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:03:55 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 18:23:33 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base*	generate(void)
{
	int		number;
	Base*	base = NULL;

	srand(time(NULL));
	number = rand() % 3;
	switch (number) {
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
		default:
			base = NULL;
	}
	return base;
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);
	if (a != nullptr)
		std::cout << "A\n";
	else if (b != nullptr)
		std::cout << "B\n";
	else if (c != nullptr)
		std::cout << "C\n";
}

void	identify(Base& p)
{
	try {
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	} catch (std::bad_cast& e) {}

	try {
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	} catch (std::bad_cast& e) {}

	try {
		C&	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	} catch (std::bad_cast& e) {}
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	if (base)
		delete base;
	return 0;
}
