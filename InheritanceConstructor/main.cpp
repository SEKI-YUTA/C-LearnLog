// This brings in the iostrema library
#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"



int main() {
    CivilEngineer civil1("seki yuta", 19, "xxx@yyy", 12, "None");
    civil1.printInfoMation();
    std::cout << "========================" << std::endl;
    Engineer eng1;
    return 0;
}


