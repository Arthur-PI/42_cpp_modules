/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:25:22 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/17 17:26:08 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Types.h"

void	usage(std::string prog_name)
{
	std::cout << "Usage: " << prog_name << " <value>" << std::endl;
}

int	main(int ac, char** av)
{
	Types*	types;

	if (ac != 2)
		return(usage(av[0]), 1);
	try {
		types = new Types(av[1]);
		std::cout << *types << std::endl;
		delete types;
	} catch (Types::NonNumericValue& e) {
		std::cout << "Error: could not instantiate the Types object because " << e.what() << std::endl;
	}
	return 0;
}
