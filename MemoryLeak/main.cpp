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
    int *p_numptr {new int{112}};

    int number {55};

    p_numptr = new int{44};
    std::cout << *p_numptr << std::endl;
    delete p_numptr;
    p_numptr = nullptr;

    {
        int *p_numptr2 {new int{57}};
    }


    return 0;
}
