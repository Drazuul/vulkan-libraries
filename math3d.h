#include <iostream>
#include <cmath>

class Vec3
{
    public:
        double x,y,z;

        Vec3() : x(0),y(0),z(0) {}
        Vec3(double vx, double vy, double vz)
        {
            x = vx;
            y = vy;
            z = vz;
        }
};

inline Vec3 operator+(const Vec3& u,const Vec3& v)
{
    return Vec3(u.x + v.x, u.y + v.y, u.z + v.z);
}

inline Vec3 operator-(const Vec3& u,const Vec3& v)
{
    return Vec3(u.x - v.x, u.y - v.y, u.z - v.z);
}

inline Vec3 operator*(const Vec3& u,const Vec3& v)
{
    return Vec3(u.x * v.x, u.y * v.y, u.z * v.z);
}

inline Vec3 operator*(double s,const Vec3& v)
{
    return Vec3(s * v.x, s * v.y, s * v.z);
}

inline Vec3 operator*(const Vec3& v, double s)
{
    return Vec3(s * v.x, s * v.y, s * v.z);
}

inline Vec3 operator/(const Vec3& v,double s)
{
    return (1/s) * v;
}

inline double dot(const Vec3& u,const Vec3& v)
{
    return u.x * v.x
        +  u.y * v.y
        +  u.z * v.z;
}

inline Vec3 cross(const Vec3& u,const Vec3& v)
{
    return Vec3(u.y * v.z - u.z * v.y, u.z * v.x - u.x * v.z,u.x * v.y - u.y * v.x);
}



class Vec4
{
    public:
        double x,y,z,w;

        Vec4() : x(0),y(0),z(0),w(0) {}
        Vec4(double vx, double vy, double vz,double vw)
        {
            x = vx;
            y = vy;
            z = vz;
            w = vw;
        }
};

inline Vec4 operator+(const Vec4& u,const Vec4& v)
{
    return Vec4(u.x + v.x, u.y + v.y, u.z + v.z, u.w + v.w);
}

inline Vec4 operator-(const Vec4& u,const Vec4& v)
{
    return Vec4(u.x - v.x, u.y - v.y, u.z - v.z, u.w - v.w);
}

inline Vec4 operator*(const Vec4& u,const Vec4& v)
{
    return Vec4(u.x * v.x, u.y * v.y, u.z * v.z, u.w * v.w);
}

inline Vec4 operator*(double s,const Vec4& v)
{
    return Vec4(s * v.x, s * v.y, s * v.z, s * v.w);
}

inline Vec4 operator*(const Vec4& v, double s)
{
    return Vec4(s * v.x, s * v.y, s * v.z, s * v.w);
}

inline Vec4 operator/(const Vec4& v,double s)
{
    return (1/s) * v;
}

inline double dot(const Vec4& u,const Vec4& v)
{
    return u.x * v.x
        +  u.y * v.y
        +  u.z * v.z
        +  u.w * v.w;
}

