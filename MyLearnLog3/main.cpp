// This brings in the iostrema library
#include <iostream>
// #include <string>
#include <iomanip>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int main() {
    float num1  {1.12345678901234567890};
    double num2  {1.1234e8};
    double num3 {0};
    double num4 {0};
    double result {num3 / num4};

    std::cout << std::setprecision(20);
    std::cout << "num1 " << num1 << std::endl;
    std::cout << "result: " << sizeof(long double) << std::endl;
    std::cout << num2 << std::endl;
    std::cout << "result: " << result << std::endl;
    return 0;
}
