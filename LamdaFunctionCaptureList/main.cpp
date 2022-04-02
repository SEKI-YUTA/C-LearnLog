// This brings in the iostrema library
#include <iostream>

/*
    [capture list](params) {
        some process
    }
*/
int main() {
    double a {1.6};
    double b {2.2};

    // Capture List に=,&を入れると自動で必要なものをキャプチャしてくれる
    auto func1 = [=]() {
        std::cout << "sum: " << a + b << std::endl;
        // std::cout << "Hello" << std::endl;
    };
    func1();
    return 0;
}