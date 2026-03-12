#ifndef VEC_H
#define VEC_H

#include <iostream>
#include <cmath>

template <typename T>
struct Vec3 
{
    T x, y, z;

    Vec3(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}

    Vec3 operator+(const Vec3& other_vec) const
    {
        return Vec3(x + other_vec.x, y + other_vec.y, z + other_vec.z);
    }

    Vec3 operator-(const Vec3& other_vec) const
    {
        return Vec3(x - other_vec.x, y - other_vec.y, z - other_vec.z);
    }

    Vec3 operator*(const T scalar) const
    {
        return Vec3(x * scalar, y * scalar, z * scalar);
    }

    Vec3 operator-() const
    {
        return Vec3(-x , -y, -z);
    }

    T length() const
    {
        return std::sqrt(x*x + y*y + z*z);
    }

    void normalise()
    {
        T length = this->length();
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

using Vec3d = Vec3<double>;

template <typename T>
T dot(const Vec3<T>& vector_one, const Vec3<T>& vector_two) 
{
    return ( (vector_one.x * vector_two.x) + (vector_one.y * vector_two.y) + (vector_one.z * vector_two.z) );
}

template <typename T>
Vec3<T> reflect(const Vec3<T>& v, const Vec3<T>& normal)
{
    return v - normal * 2.0 * dot(v, normal);
}

#endif