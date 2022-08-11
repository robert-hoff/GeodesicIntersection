#include <iostream>
#include "CoordinateMaths.h"
#include "Point3.h"
#include "LatLon.h"
#include "Line.h"
#include "GeoIntersect.h"

using namespace GeoIntersection;

int main()
{
    //LatLon a = LatLon(-40.3469, -101.5602);
    //LatLon b = LatLon(41.3676, 98.3721);
    //LatLon c = LatLon(-36.4934, 58.4006);
    //LatLon d = LatLon(44.9565, -167.3210);

    //LatLon a = LatLon(80,0);
    //LatLon b = LatLon(80,-180);
    //LatLon c = LatLon(80,90);
    //LatLon d = LatLon(80,-90);

    LatLon a(-18.5426, 25.3758);
    LatLon b(38.6759, -51.2177);
    LatLon c(33.6131, 54.9729);
    LatLon d(-8.4079, -53.7334);


    if (!GeoIntersect::intersects(Line(a,b), Line(c,d))) {
        std::cout << "geodesics do not intersect" << std::endl;
        return 0;
    }

    LatLon intersect = GeoIntersect::findIntersection(Line(a, b), Line(c, d));
    // expected 17.0718, -13.5992
    std::cout << intersect.lat << ", " << intersect.lon  << std::endl;
}


