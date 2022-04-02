// This brings in the iostrema library
#include <iostream>
#include <cstring>

/*
    [capture list](params) {
        some process
    }
*/

template <typename T>
T maximum(T a, T b) {
    std::cout << "a address: " << &a << std::endl;
    std::cout << "b address: " << &b << std::endl;
    return (a > b) ? a : b;
}
template<>
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Reference
// template <typename T> const T& maximum(const T& a, const T& b) {
//     std::cout << "a address: " << &a << std::endl;
//     std::cout << "b address: " << &b << std::endl;
//     return (a > b) ? a : b;
// }

int main() {
    int x1 = 4;
    int y1 = 5;
    double x2 = 1.4;
    double y2 = 5.4;
    std::cout << "x1 address: " << &x1 << std::endl;
    std::cout << "y1 address: " << &y1 << std::endl;
    std::cout << "x2 address: " << &x2 << std::endl;
    std::cout << "y2 address: " << &y2 << std::endl;
    int result = maximum<int>(x1,y1);
    double result2 = maximum<double>(x2, y2);
    std::cout << "int maximun: " << result << std::endl;
    // std::cout << "result: " << std::strcmp("hello", "world") << std::endl;
    // std::cout << "double maximun: " << result2 << std::endl;

    return 0;
}