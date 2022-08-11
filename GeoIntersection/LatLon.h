#pragma once
#include "Point3.h"

#define EARTH_RADIUS 6371.0 // km


namespace GeoIntersection
{
    class LatLon
    {
    public:
        double lat, lon;
        LatLon(double lat, double lon);
        LatLon(Point3 p);
        static double justifyLongitude(double angle);
    };
}



