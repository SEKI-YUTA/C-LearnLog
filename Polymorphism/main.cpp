// This brings in the iostrema library
#include <iostream>
#include"parent.h"
#include "child.h"
#include "circle.h"
#include "shape.h"



int main() {
    Circle c1(5.4);
    Circle c2(6.3);
    Circle c3(9.2);
    Shape* myShapes[] {&c1, &c2, &c3};

    for(auto item: myShapes) {
        item->draw();
    }

    Shape& s1 = c1;
    s1.draw();
    return 0;
}


