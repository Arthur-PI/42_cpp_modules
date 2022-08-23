/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:12:39 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 15:18:18 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	usage(std::string prog_name)
{
	cout << "Usage: " << prog_name << " filename string1 string2\n";
	return 1;
}

int	main(int ac, char **av)
{
	if (ac != 4)
		exit(usage(av[0]));
	return 0;
}
