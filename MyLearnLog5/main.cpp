// This brings in the iostrema library
#include <iostream>
#include <string>
#include <iomanip>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int main() {
    char mychar = 65;
    char bbb {'B'};
    std::cout << static_cast<int>(mychar) << std::endl;
    std::cout << mychar << std::endl;
    std::cout << bbb << std::endl;


    return 0;
}
