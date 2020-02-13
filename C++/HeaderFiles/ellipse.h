#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h";

class Ellipse : public Shape
{
    public:
    double major_axis;
    double minor_axis;

    double area();
}

#endif
