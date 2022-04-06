#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <iostream>

class Circle : public Shape
{
public: 
    Circle() = default;
    Circle(double radius):m_radius(radius){};
    ~Circle() = default;

    void draw() {
        std::cout << "Circle::draw() called " << get_description() << std::endl;
    }
private:
    double m_radius {0};
};

#endif