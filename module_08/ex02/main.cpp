/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:58:25 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/18 16:48:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "MutantStack.h"

int main(void)
{
	MutantStack<int>	mstack;
	MutantStack<int>	stack2;

	mstack.push(5);
	std::cout << "Pushing " << 5 << " in the stack\n";
	mstack.push(17);
	std::cout << "Pushing " << 17 << " in the stack\n";
	
	std::cout << mstack.top() << " is at the top of the stack" << std::endl;
	
	mstack.pop();
	std::cout << "Poping out the last element\n";
	
	std::cout << "Stack size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	std::cout << "Pushing " << 3 << " in the stack\n";
	mstack.push(5);
	std::cout << "Pushing " << 5 << " in the stack\n";
	mstack.push(737); 
	std::cout << "Pushing " << 737 << " in the stack\n";
	// [...]
	mstack.push(0);
	std::cout << "Pushing " << 0 << " in the stack\n";
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Bottom is " << *it << std::endl;
	stack2 = mstack;
	
	++it;
	--it;
	while (it != ite) {
    	std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);
	return 0;
}
