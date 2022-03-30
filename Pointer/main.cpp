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
    // int * numptr{new int};
    // std::cout << numptr << std::endl;
    // *numptr = 10;

    // std::cout << "before" << std::endl;
    // std::cout << *numptr << std::endl;
    // delete numptr;
    // numptr = nullptr;
    // std::cout << "after" << std::endl;
    // std::cout << *numptr << std::endl;

    int * numptr {new int{100}};
    int * numptr2 {numptr};

    std::cout << "numptr: " << *numptr << std::endl;
    std::cout << "numptr2: " << *numptr2 << std::endl;

    if(numptr != nullptr) {
        std::cout << "numptr: " << *numptr << std::endl;
        std::cout << "numptr2: " << *numptr2 << std::endl;
    }
    
    return 0;
}
