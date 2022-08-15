/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:52:20 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/15 11:56:53 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_toupper(char *s)
{
	char	c;

	for (int i=0; s[i]; i++)
	{
		c = toupper(s[i]);
		std::cout << c;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i=1; av[i]; i++)
			print_toupper(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
