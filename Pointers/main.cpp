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
    // int * intptr;
    // int num {10};
    // intptr = &num;
    // std::cout << "number: " << num << std::endl;
    // std::cout << "number address: " << intptr << std::endl;
    // std::cout << "pointer dereferrence: " << *intptr << std::endl;

    // int numbers[] {1,2,3,4};
    // int *intptr;
    // intptr = numbers;

    // std::cout << "first element address: " << intptr << std::endl;
    // std::cout << *(intptr + 1);

    int nums[] { 1,2,3,4};
    int *numptr;
    numptr = nums;

    std::cout << "first element address: " << numptr << std::endl;
    std::cout << "second element address: " << numptr+1 << std::endl;
    std::cout << "first element: " << *(numptr) << std::endl;
    std::cout << "second element: " << *(numptr+1) << std::endl;

    return 0;
}
