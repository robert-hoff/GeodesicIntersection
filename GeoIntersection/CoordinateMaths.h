#pragma once
#include "Point3.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace GeoIntersection
{
    class CoordinateMaths
    {
    public:
        static double ToRadians(double deg);
        static double ToDegrees(double rad);
        static Point3 normalise(Point3 p);
        static Point3 inverse(Point3 p);
        static double det(Point3 v1, Point3 v2, Point3 v3);
        static double dot(Point3 v1, Point3 v2);
        static Point3 cross(Point3 v1, Point3 v2);
    };
}

