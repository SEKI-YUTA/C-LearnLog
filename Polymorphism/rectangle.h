#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <iostream>

class Rectangle : public Shape
{
public:
    Rectangle() = default;
    Rectangle(double lt, double lb, double rb, double rt)
    : m_lt(lt),m_lb(lb),m_rb(rb),m_rt(rt){};
    ~Rectangle() = default;

    void draw() {
        std::cout << "Rectangle::draw() called" << get_description() << std::endl;
    }
private:
    double m_lt{0};
    double m_lb{0};
    double m_rb{0};
    double m_rt{0};
};

#endif