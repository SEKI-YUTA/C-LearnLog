// This brings in the iostrema library
#include <iostream>
// #include <string>
// #include <iomanip>
// #include <compare>
#include <cstring>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int 
main() {
    char chars1[] = "Hello";
    char chars2[] = "World";
    std::strcat(chars1, chars2);
    std::strncat(chars1, "&()", 1);
    std::cout << "chars1: " << chars1 << std::endl;

    char* source1 = new char[30] {"Hello strcpy and hello C++"};
    char* dist1 = new char[10];
    std::strncpy(dist1, source1, 5);
    // std::strcpy(dist1, source1);
    std::cout << dist1 << std::endl;


    
    return 0;
}


