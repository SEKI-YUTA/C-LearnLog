// This brings in the iostrema library
#include <iostream>

int max(int a, int b) {
    (a > b) ? a : b;
}

double max(double a, double b) {
    (a > b) ? a : b;
}

int main() {
    int maxInt = max(4,6);
    double maxDouble = max(10.5, 5.6);
    std::cout << "maxInt: " << maxInt << std::endl;
    std::cout << "maxDouble: " << maxDouble << std::endl;
}
