// This brings in the iostrema library
#include <iostream>
#include "compare.h"



int main() {
    int maximum = max(7, 8);
    int minimum = min(10, 7);
    std::cout << "max " << maximum << std::endl;
    std::cout << "min " << minimum << std::endl;
    return 0;
}


