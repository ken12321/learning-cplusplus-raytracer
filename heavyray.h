#ifndef HEAVYRAY_H
#define HEAVYRAY_H

#include "ray.h"
#include <iostream>

class HeavyRay
{
    private:
        Vec3* origin;
        Vec3 direction;
    public:
        HeavyRay(const Vec3* _o, const Vec3& _d) : direction(_d) 
        {
            origin = new Vec3(*_o);

            std::cout << "HeavyRay created\n";
        }

        HeavyRay(const HeavyRay& other)
        {
            Vec3* value = new Vec3(*other.origin);
            origin = value;
        }

        ~HeavyRay()
        {
            delete origin;
            std::cout << "HeavyRay deleted\n";
        }
};

#endif