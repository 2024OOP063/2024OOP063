#include "Cylinder.h" 
#include <iomanip>
#include<cmath>
double pi = M_PI;

double Cylinder :: SurfaceArea(){
    double ans = pi * radius * radius * 2 + pi * 2 * radius * height;
    return ans;
}

double Cylinder :: Volume(){
    double ans = pi * radius * radius * height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans = pi * 2 * radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{    
    out << fixed<<std::setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << fixed<<std::setprecision(3) <<  "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << fixed<<std::setprecision(3) << "volume: " << cldr.Volume() << endl;
    return out;
}
