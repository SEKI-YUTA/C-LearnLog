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
    // int int_data{3};
    // double double_data{55};

    // int& int_ref{int_data};
    // double& double_ref{double_data};

    // std::cout << "int_data " << int_data << std::endl;
    // std::cout << "double_data " << double_data << std::endl;
    // std::cout << "int_ref " << int_ref << std::endl;
    // std::cout << "double_ref " << double_ref << std::endl;

    // int_ref = 33;

    // std::cout << "int_data " << int_data << std::endl;
    // std::cout << "int_ref " << int_ref << std::endl;

    double double_val {12.34};
    double& ref_double_val {double_val};
    double * p_double_val {&double_val};
    // *p_double_val = 10.0;
    p_double_val = &ref_double_val;

    std::cout << "double_val " << double_val << std::endl;
    std::cout << "ref_double_val " << ref_double_val << std::endl;
    std::cout << "&ref_double_val " << &ref_double_val << std::endl;
    std::cout << "p_double_val " << p_double_val << std::endl;
    std::cout << "p_double_val " << *p_double_val << std::endl;




    return 0;
}


