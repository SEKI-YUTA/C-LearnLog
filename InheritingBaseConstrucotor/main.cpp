// This brings in the iostrema library
#include <iostream>
#include "person.h"
#include "engineer.h"



int main() {
    Engineer eng1("seki yuta", 19, "xxx@yyy",12);
    std::cout << eng1 << std::endl;
    std::cout << "========================" << std::endl;
    Engineer eng2(eng1);
    eng2.detail();
    return 0;

}


