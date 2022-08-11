#pragma once
#include "Point3.h"
#include "LatLon.h"

namespace GeoIntersection
{
    class Line
    {
    public:
        Point3 p1, p2;
        Line(Point3 p1, Point3 p2);
        Line(LatLon p1, LatLon p2);
    };
}


