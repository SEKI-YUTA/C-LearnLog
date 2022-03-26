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
    int short num1 = 10;
    int short num2 = 20;
    std::cout << "sizeof num1 is " << sizeof(num1) << std::endl;
    std::cout << "sizeof num2 is " << sizeof(num2) << std::endl;
    auto result1 = num1 + num2;


    std::cout << "sizeof result1 is " << sizeof(result1) << std::endl;
    return 0;
}
