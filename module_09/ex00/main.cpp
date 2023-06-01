#include <iostream>
#include <stdexcept>
#include "BitcoinExchange.h"

int	main(int ac, char** av)
{
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <file.txt>" << std::endl;
		return 1;
	}
	try {
		BitcoinExchange	be = BitcoinExchange("data.csv");
		be.compute_prices(av[1]);
	} catch (std::runtime_error &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}