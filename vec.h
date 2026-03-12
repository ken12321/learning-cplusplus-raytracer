#ifndef VEC_H
#define VEC_H

#include <iostream>
#include <cmath>

struct Vec3 
{
    double x, y, z;

    Vec3(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

    Vec3 operator+(const Vec3& other_vec) const
    {
        return Vec3(x + other_vec.x, y + other_vec.y, z + other_vec.z);
    }

    Vec3 operator-(const Vec3& other_vec) const
    {
        return Vec3(x - other_vec.x, y - other_vec.y, z - other_vec.z);
    }

    Vec3 operator*(const double scalar) const
    {
        return Vec3(x * scalar, y * scalar, z * scalar);
    }

    Vec3 operator-() const
    {
        return Vec3(-x , -y, -z);
    }

    double length() const
    {
        return std::sqrt(x*x + y*y + z*z);
    }

    void normalise()
    {
        double length = this->length();
        if (length == 0)
        {
            x = 0;
            y = 0;
            z = 0;
        }
        else 
        {
            x /= length;
            y /= length;
            z /= length;
        } 
    }
};

double dot(const Vec3& vector_one, const Vec3& vector_two) 
{
    return ( (vector_one.x * vector_two.x) + (vector_one.y * vector_two.y) + (vector_one.z * vector_two.z) );
}

Vec3 reflect(const Vec3& v, const Vec3& normal)
{
    return v - normal * 2.0 * dot(v, normal);
}

#endif