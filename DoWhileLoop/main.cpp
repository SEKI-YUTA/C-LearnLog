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
    bool isWhile = false;
    int COUNT = 10;
    size_t i = 5u;

    do
    {
        if (isWhile)
        {
            std::cout << "whiele loop" << std::endl;
            i++;
        } else {
            std::cout << "do loop" << std::endl;
            isWhile = true;
        }
        
    } while (i < COUNT);

    return 0;
}
