// This brings in the iostrema library
#include <iostream>

/*
    [capture list](params) {
        some process
    }
*/
auto func1 = [] () {
    std::cout << "Hello Lamda Function" << std::endl;
};

auto result = [](int a, int b) {
    return (a+b);
}(10, 5);

int main() {
    [](double a, double b) {
        std::cout << "sum: " << (a + b) << std::endl;
    }(10.5, 1.3);
    func1();
    std::cout << "sum: " << result << std::endl;
    return 0;
}
