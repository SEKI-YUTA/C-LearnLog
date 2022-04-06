#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>

class Shape
{
public:
    Shape() = default;
    Shape(const std::string_view& description);
    ~Shape() = default;

    void draw() {
        std::cout << "Shape::draw() called " << m_description << std::endl; 
    }
    std::string get_description() {
        return m_description;
    }
private:
    std::string m_description {"None"};
};

#endif
