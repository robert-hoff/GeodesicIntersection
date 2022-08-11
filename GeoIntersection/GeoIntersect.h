#pragma once
#include "LatLon.h"
#include "Line.h"


namespace GeoIntersection
{
    class GeoIntersect
    {
    public:
        static LatLon findIntersection(Line line1, Line line2);
        static bool intersects(Line a, Line b);
        static bool straddles(Line s, Line t);
    };
}



