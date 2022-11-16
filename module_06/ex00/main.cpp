/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:25:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/16 22:53:20 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Types.h"

void	usage(std::string prog_name)
{
	std::cout << "Usage: " << prog_name << " <value>" << std::endl;
}

// TODO deal with overflow (if too big of an INT asume its a double ;) ) and deal with non numeric values
int	main(int ac, char** av)
{
	Types*	types;

	if (ac != 2)
		return(usage(av[0]), 1);
	types = new Types(av[1]);
	std::cout << *types << std::endl;
	delete types;
	return 0;
}
