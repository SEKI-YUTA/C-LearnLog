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
    int age {27};
    int& ref_age {age};

    /*
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    age++;
    
    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;
    */

    /*
   const int * const p_age {&age};

   *p_age = 45;
   */

    return 0;
}


