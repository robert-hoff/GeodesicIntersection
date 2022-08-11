#include <math.h>
#include "Point3.h"
#include "LatLon.h"
#include "CoordinateMaths.h"

using namespace GeoIntersection;

Point3::Point3() {}

Point3::Point3(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
};

Point3 Point3::getCartesianPoint(double lat, double lon)
{
    double phi = CoordinateMaths::ToRadians(lat);
    double theta = CoordinateMaths::ToRadians(lon);
    double x = EARTH_RADIUS * cos(phi) * cos(theta);
    double y = EARTH_RADIUS * cos(phi) * sin(theta);
    double z = sin(phi) * EARTH_RADIUS;
    return Point3(x,y,z);
}


