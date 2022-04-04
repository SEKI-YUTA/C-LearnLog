// This brings in the iostrema library
#include <iostream>
#include "constants.h"
#include "cylinder.h"



int main() {
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
    cylinder2.set_height(2.5);
    std::cout << "volume1 " << cylinder1.volume() <<std::endl;
    std::cout << "volume2 " << cylinder2.volume() <<std::endl;

    std::cout << "volume2.base_radius: " << cylinder2.get_radius() << std::endl;
    std::cout << "volume2.height: " << cylinder2.get_height() << std::endl;
    return 0;
}


