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
    // int * data = new int[100000000000000];

    // for(size_t i{0}; i<1000000000; i++) {
    //     int * data = new int[10000000000];
    // }

    //exception 
    //std::nothrow

   

    for(size_t i{0}; i<100; i++) {
        try {
            int * data = new int[10000000000];
        } catch(std::exception& ex) {
            std::cout << "Something wrong" << ex.what() << std::endl;
        }
    }

    std::cout << "Program ending Well" << std::endl;

    return 0;
}
