#include <iostream>
#include <memory>
#include <vector>
#include "vec.h"
#include "ray.h"
#include "sphere.h"

int main()
{
    std::vector<std::unique_ptr<Sphere>> list_of_spheres;

    list_of_spheres.push_back(std::make_unique<Sphere>(Vec3(6,4,7), 1.5));
    list_of_spheres.push_back(std::make_unique<Sphere>(Vec3(5,5,6), 2.5));
    list_of_spheres.push_back(std::make_unique<Sphere>(Vec3(3,3,3), 3.0));

    for (size_t i = 0; i < list_of_spheres.size(); i++)
    {
        std::cout << "Sphere " << i << " Center: " << list_of_spheres[i]->center.x << list_of_spheres[i]->center.y << list_of_spheres[i]->center.z <<"\n";
        std::cout << "Sphere " << i << " Radius: " << list_of_spheres[i]->radius << "\n";
    }

    return 0;
}
