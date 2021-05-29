

#pragma once
#include "GeoSolid.hh"

#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;
class Cuboid : public GeoSolid
{
    double katOrient;

public:
    Cuboid(){};
    Cuboid(Vector<3> pkt, double h, double w, double d, string NazwaPlikuCzyt, string NazwaPlikuPis);
    double StNaRad(double katOrient) { return katOrient * M_PI / 180; }
    Cuboid operator+(Vector<3> wektor);
};

std::ostream &operator<<(std::ostream &Strm,
                         const Cuboid &Pr);