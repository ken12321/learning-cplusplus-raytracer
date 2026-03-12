#include <iostream>
#include <memory>
#include <vector>
#include <utility>
#include "vec.h"
#include "ray.h"
#include "sphere.h"
#include "hittable.h"

int main()
{
    Vec3d v1(1,2,3);
    Vec3d v2(1,2,3);

    v2 = std::move(v1);
    printf("v2 x: %0.2f, y: %0.2f, z: %0.2f\n", v2.x, v2.y, v2.z);

    return 0;
}
