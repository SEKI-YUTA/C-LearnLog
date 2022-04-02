// This brings in the iostrema library
#include <iostream>
#include "person.h"

double weight {10.7};

// 先にdoubleを２つ引数にとる関数があるよって知らせる
double add(double a, double b);

struct Point {
    double m_x;
    double m_y;
};

int main() {
    // double result = add(10,20);
    // std::cout << result << std::endl;

    // Point p1;
    // std::cout << "Point.x " << p1.m_x << " Point.y " << p1.m_y << std::endl;

    Person p1("Yuta Seki", 19);
    p1.print_info();
    return 0;
}

double add(double a, double b) {
    return a + b;
}
// double add(double a, double b, double c) {
//     return a + b + c;
// }