#include <math.h>
#include "LatLon.h"
#include "Point3.h"
#include "CoordinateMaths.h"

using namespace GeoIntersection;

LatLon::LatLon(double lat, double lon) {
    this->lat = lat;
    this->lon = lon;
};

LatLon::LatLon(Point3 p) {
    double lat = CoordinateMaths::ToDegrees(asin(p.z / EARTH_RADIUS)); // -90 to 90
    double lon = CoordinateMaths::ToDegrees(atan2(p.y, p.x));
    this->lat = lat;
    this->lon = lon;
};

double LatLon::justifyLongitude(double angle)
{
    if (angle >= 180)
    {
        return angle - 360;
    }
    if (angle < 180)
    {
        return angle + 360;
    }
    return angle;
}


