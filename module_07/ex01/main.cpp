/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:09:56 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 21:34:50 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.h"

void    plus_100(int& n)
{
    n += 100;
}

void    add_c(std::string& s)
{
    s += ".c";
}

int main(void)
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Before:\n";
    for (int i=0; i < 10; i++)
        std::cout << numbers[i] << "\n";
    ::iter(numbers, 10, &plus_100);
    std::cout << "After:\n";
    for (int i=0; i < 10; i++)
        std::cout << numbers[i] << "\n";

    std::string files[5] = {"test", "main", "parser", "utils", "colors"};
    std::cout << "\nBefore:\n";
    for (int i=0; i < 5; i++)
        std::cout << files[i] << "\n";
    ::iter(files, 5, &add_c);
    std::cout << "After:\n";
    for (int i=0; i < 5; i++)
        std::cout << files[i] << "\n";
    return 0;
}
