#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder {
    public:
        double volume();
        double get_radius();
        double get_height();
        void set_radius(double radius_param);
        void set_height(double height_radius);
        Cylinder()= default;
        Cylinder(double radius_param, double height_param);
    private:
        double base_radius{1};
        double height {1};
};

#endif