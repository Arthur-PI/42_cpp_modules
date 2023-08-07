#include "PmergeMe.hpp"
#include <iostream>

int main(int ac, char** av)
{
    if (ac == 1) {
        std::cerr << "Usage: " << av[0] << " <number [number number ...]>" << std::endl;
        exit(1);
    }
    PmergeMe    list(av + 1);
    list.sort();
    return 0;
}
