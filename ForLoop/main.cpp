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
    // for (int i = 0u; i < 10; i++)
    // {
    //     /* code */
    //     std::cout << "I love C++" << std::endl;
    // }

    // for (int i = 10; i > 0; i--) {
    //     std::cout << "count: " << i << std::endl;
    //     std::cout << "I love C++" << std::endl;
    // } 
    for(int i = 1; i <= 10;i++) {
        for(int j = 1; j <= 10; j++) {
            std::cout << std::setw(4) <<  (i - 1) * 10 + j;
        }
        std::cout << std::endl;
    }

    return 0;
}
