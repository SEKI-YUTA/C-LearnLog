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
    // char message [] {'H', 'e', 'l', 'l', 'o', '\0'};

    // std::cout << "message: ";
    // for (auto c: message) {
    //     std::cout << c;
    // }


    // std::cout << message;

    char message2 [] { "Hello"};
    std::string message3 = "Hello";

    std::cout << std::size(message2) << std::endl;
    std::cout << std::size(message3) << std::endl;
    return 0;
}
