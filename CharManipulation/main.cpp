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
    char mychars[] {'H', 'e', 'l', 'l', 'o',};

    // std::cout << (std::isalnum(mychars[0]) ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isalnum('B') ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isalnum('(') ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isblank('(') ? "blank" : "is not blank") << std::endl;
    // std::cout << (std::isdigit('1') ? "number" : "is not blank") << std::endl;
    // std::cout << (char)std::toupper('e') << std::endl;

    char myChars[] {"Hello World"};
    for (auto mychar: myChars) {
        // std::cout << mychar;
        if(std::islower(mychar)) {
            std::cout << (char)std::toupper(mychar);
        } else if(std::isblank(mychar)) {

        } else {
            std::cout << mychar;
        }
    }

    return 0;
}


