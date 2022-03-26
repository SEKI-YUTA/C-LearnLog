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
    std::cout << std::setw(10) << "name" << std::setw(10) << "job" << std::setw(5) << "age" << std::endl;
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << "yuta" << std::setw(10) << "student" << std::setw(5) << "19" << std::endl;
    std::cout << std::setw(10) << "ryo" << std::setw(10) << "student" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "shin" << std::setw(10) << "student" << std::setw(5) << "18" << std::endl;
    std::cout << std::setw(10) << "ryuki" << std::setw(10) << "student" << std::setw(5) << "23" << std::endl;

    int num1 = 10;
    int num2 = -10;
    std::cout << std::showpos;
    std::cout << std::showbase;

    std::cout << std::right;
    std::cout << std::setw(10) << num1 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << std::oct << num1 << std::endl;

    return 0;
}
