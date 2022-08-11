#pragma once

namespace GeoIntersection
 {
    class Point3
    {
    public:
        double x, y, z;
        Point3();
        Point3(double x, double y, double z);
        static Point3 getCartesianPoint(double lat, double lon);
    };
 }


