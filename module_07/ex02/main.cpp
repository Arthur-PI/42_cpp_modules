#include <iostream>
#include <cstdlib>
#include "Array.h"

#define MAX_VAL 750

int main(int, char**)
{
    int*        mirror = new int[MAX_VAL];
    Array<int>  numbers(MAX_VAL);

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int   value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int>  tmp = numbers;
        Array<int>  test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try {
        std::cout << "Trying to access index -2 of array:\n";
        numbers[-2] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        std::cout << "Trying to access index LEN of array:\n";
        numbers[MAX_VAL] = 0;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
