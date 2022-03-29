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
    int * numptr{new int};
    std::cout << numptr << std::endl;
    *numptr = 10;

    std::cout << "before" << std::endl;
    std::cout << *numptr << std::endl;
    delete numptr;
    numptr = nullptr;
    std::cout << "after" << std::endl;
    std::cout << *numptr << std::endl;
    
    return 0;
}
