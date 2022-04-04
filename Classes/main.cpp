// This brings in the iostrema library
#include <iostream>

const double PI {3.14159265};

class Cylinder {
    public:
        double volume() {
            return PI * base_radius * base_radius * height;
        }
        Cylinder() {
            std::cout << "instance created" << std::endl;
            base_radius = 10.0;
            height = 10;
        }
        Cylinder(double radius_param, double height_param) {
            base_radius = radius_param;
            height = height_param;
        }
    private:
        double base_radius{1};
        double height {1};
};

int 
main() {
    Cylinder cylinder1;
    Cylinder cylinder2(5.0, 5.0);
    // std::cout << "volume " << cylinder1.volume() << std::endl;
    // std::cout << "radius " << cylinder1.base_radius << std::endl;
    // std::cout << "height " << cylinder1.height << std::endl;
    // cylinder1.base_radius = 10;
    // cylinder1.height = 3;
    // std::cout << "volume " << cylinder1.volume() << std::endl;
    std::cout << "volume1 " << cylinder1.volume() <<std::endl;
    std::cout << "volume2 " << cylinder2.volume() <<std::endl;
    return 0;
}


