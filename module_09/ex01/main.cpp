#include <iostream>
#include "RPN.h"

int	main(int ac, char ** av)
{
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <rpn>\n";
		return 1;
	}
	if (!is_valid_rpn(av[1])) {
		std::cout << "Error" << std::endl;
		return 2;
	}
	std::cout << compute_rpn(av[1]) << std::endl;
	return 0;
}