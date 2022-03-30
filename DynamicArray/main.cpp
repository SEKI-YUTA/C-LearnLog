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
    size_t size {4};
    double *temperatures {new double[size] {10.0, 20.0, 30.0, 40.0}};
    if(temperatures) {
        // std::cout << "temperatures length: " << std::size(temperatures) << std::endl;
        // for(size_t i{}; i < size; i++) {
        //     std::cout << "value " << temperatures[i] << *(temperatures + i) << std::endl;
        // }
    }

    delete [] temperatures;
    temperatures = nullptr;


    int scores[5] {1,2,3,4};
    std::cout << "scores length: " << std::size(scores) << std::endl;
    for(auto item: scores) {
        std::cout << item << std::endl;
    }
    return 0;
}


