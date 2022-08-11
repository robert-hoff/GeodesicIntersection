#include <cmath>
#include "GeoIntersect.h"
#include "CoordinateMaths.h"
#include "Point3.h"
#include "LatLon.h"

using namespace GeoIntersection;

LatLon GeoIntersect::findIntersection(Line line1, Line line2)
{
    Point3 pA = CoordinateMaths::normalise(line1.p1);
    Point3 pB = CoordinateMaths::normalise(line1.p2);
    Point3 pC = CoordinateMaths::normalise(line2.p1);
    Point3 pD = CoordinateMaths::normalise(line2.p2);
    Point3 m = CoordinateMaths::cross(CoordinateMaths::cross(pA, pB), CoordinateMaths::cross(pC, pD));
    double sign = CoordinateMaths::det(pA, pC, pD);
    if (sign < 0)
    {
        m = CoordinateMaths::inverse(m);
    }
    double modulus = sqrt(m.x * m.x + m.y * m.y + m.z * m.z);
    Point3 intersectCartesian(
        m.x / modulus * EARTH_RADIUS,
        m.y / modulus * EARTH_RADIUS,
        m.z / modulus * EARTH_RADIUS);
    return LatLon(intersectCartesian);
}

bool GeoIntersect::intersects(Line a, Line b)
{
    return straddles(a, b) && straddles(b, a);
}

bool GeoIntersect::straddles(Line s, Line t)
{
    return CoordinateMaths::det(s.p1, t.p1, t.p2) * CoordinateMaths::det(s.p2, t.p1, t.p2) < 0;
}


