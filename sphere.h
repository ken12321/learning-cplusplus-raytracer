#ifndef SPHERE_H
#define SPHERE_H

#include "vec.h"
#include "hittable.h"
#include <iostream>

struct Sphere : public Hittable
{
    Vec3 center;
    double radius;

    Sphere(Vec3 c, double r) : center(c), radius(r) {}

    bool hit(const Ray& ray) const override
    {
        return false;
    }

    ~Sphere()
    {
        printf("Sphere destroyed at [%.2f, %.2f, %.2f]\n", center.x, center.y, center.z);
    }
};

#endif