#include <cmath>
#include "CoordinateMaths.h"
#include "Point3.h"

using namespace GeoIntersection;

double CoordinateMaths::ToRadians(double deg)
{
    return (M_PI / 180) * deg;
}

double CoordinateMaths::ToDegrees(double rad)
{
    return (180 * rad) / M_PI;
}

Point3 CoordinateMaths::normalise(Point3 p)
{
    double m = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
    return Point3(p.x / m, p.y / m, p.z / m);
}

Point3 CoordinateMaths::inverse(Point3 p)
{
    return Point3(-p.x, -p.y, -p.z);
}

double CoordinateMaths::det(Point3 v1, Point3 v2, Point3 v3)
{
    return dot(v1, cross(v2, v3));
}

double CoordinateMaths::dot(Point3 v1, Point3 v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Point3 CoordinateMaths::cross(Point3 v1, Point3 v2)
{
    return Point3(
        v1.y * v2.z - v1.z * v2.y,
        v1.z * v2.x - v1.x * v2.z,
        v1.x * v2.y - v1.y * v2.x);
}



