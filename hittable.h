#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"

struct Hittable
{
    Hittable() {}

    virtual bool hit(const Ray& ray) const = 0;

    virtual ~Hittable() = default;
};

#endif