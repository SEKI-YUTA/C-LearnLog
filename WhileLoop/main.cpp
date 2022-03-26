// This brings in the iostrema library
#include <iostream>
#include <string>
#include <iomanip>
#include <compare>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int 
main() {
    int COUNT = 10;
    // int i = 0u;
    size_t i = 0u;

    while (i < COUNT)
    {
        std::cout << "count: " << i << std::endl;
        i++;
    }

    return 0;
}
