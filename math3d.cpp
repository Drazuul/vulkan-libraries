/*
    Vec3 (0,0,0)
    Vec4 (0,0,0,0)
    Mat4 { 
          (0,0,0,0)
          (0,0,0,0)
          (0,0,0,0)
          (0,0,0,0)    
         }


    vector operations
        add
        subtract
        scale
        dot
        cross
        mag
        normalize

    matrix operations
        multiply

*/
#include <iostream>
#include <cmath>
#include "math3d.h"

void printVec3(const Vec3& v)
{
    std::cout << "{" << v.x << ", " << v.y << ", " << v.z << "} \n";
}

void printVec4(const Vec4& v)
{
    std::cout << "{" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << "} \n";
}

int main() 
{
    printVec3(Vec3(1,2,3));
    printVec3(Vec3(4,5,6));
    printVec3(Vec3(1,2,3) + Vec3(4,5,6));
    printVec3(Vec3(1,2,3) - Vec3(4,5,6));
    printVec3(cross(Vec3(1,2,3), Vec3(4,5,6)));

    std::cout << "\n\n";

    printVec4(Vec4(1,2,3,4));
    printVec4(Vec4(1,2,3,4) + Vec4(5,6,7,8));
    printVec4(Vec4(1,2,3,4) - Vec4(5,6,7,8));
    printVec4(Vec4(1,2,3,4) * Vec4(5,6,7,8));
    



    return 0;
}


