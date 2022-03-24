// This brings in the iostrema library
#include <iostream>
#include <string>


int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int main() {
    /*
    int age1;
    std::string name;
    std::cout << "Please enter your name and age" << std::endl;
    std::cin >> name >> age1;
    // std::cin >> name;
    // std::cin >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;
    return 0;
    // return 0; means program exit with safe

    // std::cin input
    // std::cerr error to console
    // std::clog log to console
    */

   std::string full_name;
   int age3;
   std::cout << "Please enter your full name and age" << std::endl;
   std::getline(std::cin, full_name);
   std::cin >> age3;
   std::cout << "Hello " << full_name << " you are " << age3 << " years old" << std::endl;
}
