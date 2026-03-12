#ifndef RAY_H
#define RAY_H

#include <iostream>
#include "vec.h"

class Ray {
    private:
        Vec3d _origin, _direction;
    public:
        Ray(const Vec3d& _o, const Vec3d& _d) : _origin(_o), _direction(_d) 
        {
            _direction.normalise();
        }

        const Vec3d& getOrigin() const
        {
            return _origin;
        }

        const Vec3d& getDirection() const
        {
            return _direction;
        }

        Vec3d at (double t) const
        {
            return _origin + _direction * t;
        }
};

#endif