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
    // char mychar = 67;
    // std::cout << static_cast<int>(mychar) << std::endl;
    // std::cout << (double)31/10 << std::endl;
    // std::cout << (double)1/10 << std::endl;
    std::string input;
    std::getline(std::cin, input);
    bool flg1 = false;
    if(input != "") {
        std::cout << "Hi!" << std::endl;
    }

    return 0;
}
