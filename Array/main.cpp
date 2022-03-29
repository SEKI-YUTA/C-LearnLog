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
    int numbers[10];

    for(size_t i{}; i < 10; i++) {
        numbers[i] = i + 1;
    }

    // for(int i = 0; i < 10; i++) {
    //     std::cout << "index " << i << " val " << numbers[i] << std::endl;
    // }

    for (int i = 0; i < std::size(numbers); i++) {
        std::cout << "index " << i << " " << numbers[i] << std::endl;
    }

    std::cout << "array size: " << std::size(numbers) << std::endl;

    // int sum = 0;
    // int numbers2[] {10,20,30,40,50};

    // for(auto value : numbers2) {
    //     std::cout << "value " << value << std::endl;
    //     sum += value;
    // }

    // std::cout << "sum " << sum << std::endl;

    return 0;
}
