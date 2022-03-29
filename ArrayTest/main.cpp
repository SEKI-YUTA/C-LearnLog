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
    int numbers[] {1,2,3,4,5};;

    std::cout << "numbers[5]" << numbers[5] << std::endl;

    return 0;
}
