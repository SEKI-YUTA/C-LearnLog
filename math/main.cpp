// This brings in the iostrema library
#include <iostream>
#include <limits>
#include <cmath>
// #include <string>
// #include <iomanip>
// #include <compare>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int 
main() {
    double num1 = -12.34;
    double weight {12.3};
    // std::cout << "short min number is " << std::numeric_limits<short>::min() << std::endl;
    // std::cout << "short max number is " << std::numeric_limits<short>::max() << std::endl;
    // std::cout << "int digits " << std::numeric_limits<short>::digits << std::endl;

    std::cout << num1 << std::endl;
    std::cout << std::abs(num1) << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << std::floor(weight) << std::endl;
    std::cout << std::ceil(weight) << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << "3^4 is " << std::pow(3,4) << std::endl;
    std::cout << "9^3 is " << std::pow(9,3) << std::endl;


    return 0;
}
