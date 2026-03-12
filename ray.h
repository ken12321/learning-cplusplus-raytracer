#ifndef RAY_H
#define RAY_H

#include <iostream>
#include "vec.h"

class Ray {
    private:
        Vec3 _origin, _direction;
    public:
        Ray(const Vec3& _o, const Vec3& _d) : _origin(_o), _direction(_d) 
        {
            _direction.normalise();
        }

        const Vec3& getOrigin() const
        {
            return _origin;
        }

        const Vec3& getDirection() const
        {
            return _direction;
        }

        Vec3 at (double t) const
        {
            return _origin + _direction * t;
        }
};

#endif