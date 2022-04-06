// This brings in the iostrema library
#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"



int main() {
    CivilEngineer civil1("seki yuta", 19, "xxx@yyy", 12, "None");
    // civil1.printInfoMation();
    CivilEngineer civil2(civil1);
    civil2.printInfoMation();
    std::cout << "========================" << std::endl;
    Engineer eng1("seki yuta", 19, "xxx@yyy", 12);
    std::cout << eng1 << std::endl;
    std::cout << "========================" << std::endl;
    Engineer eng2(eng1);
    eng2.detail();
    return 0;
}


