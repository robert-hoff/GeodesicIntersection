#include <math.h>
#include "Line.h"
#include "LatLon.h"
#include "Point3.h"
#include "CoordinateMaths.h"

using namespace GeoIntersection;

 Line::Line(Point3 p1, Point3 p2) {
     this->p1 = p1;
     this->p2 = p2;
 };

Line::Line(LatLon p1, LatLon p2) {
    this->p1 = Point3::getCartesianPoint(p1.lat, p1.lon);
    this->p2 = Point3::getCartesianPoint(p2.lat, p2.lon);
};








