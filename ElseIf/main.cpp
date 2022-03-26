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
    bool red {true};
    bool yellow {false};
    bool green {false};

    if(red && yellow && green) {
        std::clog << "Wrong state please check state" << std::endl;
        return 1;
    }
    if(red) {
        std::cout << "Stop!" << std::endl;
    }
    else if(yellow) {
        std::cout << "slow down" << std::endl;
    }
    else if(green) {
        std::cout << "Go!" << std::endl;
    }

    std::cout << (red ? "red" : "is not red") << std::endl;
    return 0;
}
