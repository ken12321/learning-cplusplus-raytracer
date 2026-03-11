#ifndef SPHERE_H
#define SPHERE_H

#include "vec.h"

struct Sphere 
{
    Vec3 center;
    double radius;

    Sphere(Vec3 c, double r) : center(c), radius(r) {}
};

#endif