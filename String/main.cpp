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
    // char mychars[] {'H', 'e', 'l', 'l', 'o',};

    // std::cout << (std::isalnum(mychars[0]) ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isalnum('B') ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isalnum('(') ? "Alphabet" : "is not Alphabet") << std::endl;
    // std::cout << (std::isblank('(') ? "blank" : "is not blank") << std::endl;
    // std::cout << (std::isdigit('1') ? "number" : "is not blank") << std::endl;
    // std::cout << (char)std::toupper('e') << std::endl;

    // char myChars[] = "Hello World";
    // std::cout << std::strlen(myChars) << std::endl;
    // for (auto mychar: myChars) {
    //     // std::cout << mychar;
    //     if(std::islower(mychar)) {
    //         std::cout << (char)std::toupper(mychar);
    //     } else if(std::isblank(mychar)) {

    //     } else {
    //         std::cout << mychar;
    //     }
    // }

    // std::cout << std::endl;
    // std::cout << "std::strcmp" << std::endl;

    // const char* string_data1 {"Alabama"};
    // const char* string_data2 {"Blabama"};

    // char string_data3[] {"Alabama"};
    // char string_data4[] {"Blabama"};

    // std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
    // << std::strcmp(string_data1, string_data2) << std::endl;
    // std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : "
    // << std::strcmp(string_data3, string_data4) << std::endl;

    // std::cout << "===================" << std::endl;

    // string_data1 = "Japan";
    // string_data2 = "China";
    
    // std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
    // << std::strcmp(string_data1, string_data2) << std::endl;
    // std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : "
    // << std::strcmp(string_data3, string_data4) << std::endl;

    char input[] = "/home/user/hello.cpp";
    char * output = std::strrchr(input, '/');
    if(output) {
        std::cout << "output: " << output << std::endl;
    }



    return 0;
}


