// This brings in the iostrema library
#include <iostream>
#include "player.h"



int main() {
    Player p1("basketball", "John", "Snow");
    // p1.first_name = "John";
    // p1.last_name = "Snow";
    // p1.set_first_name("John");
    // p1.set_last_namel("Snow");
    std::cout << p1.get_first_name() << std::endl;
    std::cout << p1.get_last_name() << std::endl;
    // std::cout << p1.m_game << std::endl;
    return 0;
}


