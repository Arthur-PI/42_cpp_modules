/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:12:39 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 16:05:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static int	usage(std::string prog_name)
{
	std::cout << "Usage: " << prog_name << " filename string1 string2\n";
	return 1;
}

static void	replace(std::string &line, size_t pos, int len, std::string word)
{
	(void)line;
	(void)pos;
	(void)len;
	(void)word;
	// TODO
}

int	main(int ac, char **av)
{
	size_t			len;
	std::string		line;
	std::string		to_replace;
	std::ifstream	in;

	if (ac != 4)
		exit(usage(av[0]));
	to_replace = av[2];
	len = to_replace.length();
	in.open(av[1], std::ifstream::in);
	if (!in) {
		std::cout << "Unable to open the file\n";
		exit(2);
	}
	while (getline(in, line) {
		while (true) {
			size_t pos = line.find(av[2]);
			if (pos != std::string::npos)
				replace(line, pos, len, av[3]);
			else
				break;
		}
		std::cout << line;
	}
	in.close();
	return 0;
}
