#include <iostream>
#include <memory>
#include <vector>
#include "vec.h"
#include "ray.h"
#include "sphere.h"
#include "hittable.h"

int main()
{
    std::vector<std::unique_ptr<Hittable>> list_of_hittables;
    
    list_of_hittables.push_back(std::make_unique<Sphere>(Vec3d(1,2,3), 5.0));
    list_of_hittables.push_back(std::make_unique<Sphere>(Vec3d(3,4,5), 3.2));

    Ray ray(Vec3d(1,2,3), Vec3d(3,2,1));
    for(size_t i = 0; i < list_of_hittables.size(); i++)
    {
        list_of_hittables[i]->hit(ray);
    }


    return 0;
}
