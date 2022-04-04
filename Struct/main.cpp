// This brings in the iostrema library
#include <iostream>

struct Point
{
    public: 
        double x;
        double y;
        double z;
};

void print_point(Point point) {
std::cout << "[ x: " << point.x << " y: " << point.y << " z: " << point.z << " ]" << std::endl;
}

int main() {
    Point point;
    point.x = 14.0;
    point.y = 5.7;
    point.z = 3.6;
    // std::cout << "point x " << point.x << std::endl;
    print_point(point);
    return 0;
}


