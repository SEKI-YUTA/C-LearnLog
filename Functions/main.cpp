// This brings in the iostrema library
#include <iostream>

void sayHello() {
    std::cout << "Hello!" << std::endl;
}

double minNum(double a, double b);


void selfIntro(unsigned int age, const char* name);

int main() {
    sayHello();
    selfIntro(19.0, "yuta");
    std::cout << "minnumber is " << minNum(10.0, 9.8) << std::endl;
    return 0;
}

double minNum(double a, double b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

void selfIntro(unsigned int age, const char* name) {
    std::cout << "age: " << age << " name: " << name << std::endl;
} 