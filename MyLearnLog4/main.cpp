// This brings in the iostrema library
#include <iostream>
#include <string>
#include <iomanip>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int main() {
    std::string input;
    bool isBlue = false;
    std::getline(std::cin, input);
    if(input == "blue") {
        isBlue = true;
    } else {
        isBlue = false;
    }
    if(isBlue) {
        std::cout << "Go Straight" << std::endl;
    } else {
        std::cout << "Stop!" << std::endl;
    }

    return 0;
}
