// This brings in the iostrema library
#include <iostream>


void say_age(int& age);

int main() {
    int age {19};
    std::cout << "before " << age << "age" << "address: " << &age << std::endl;
    say_age(age);
    std::cout << "after " << age << "age " << "address: " << &age << std::endl;
    return 0;
}

void say_age(int& age) {
    ++age;
    std::cout << "next year" << age << " years old!" << "address: " << &age << std::endl;
}


