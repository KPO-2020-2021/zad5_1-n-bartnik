

#pragma once

// #include "vector.hh"
#include "GeoSolid.hh"

//#include "size.hh"
// #include "../include/lacze_do_gnuplota.hh"
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;
class Cuboid: public GeoSolid
{
    double katOrient;

public:
    Cuboid(){};
    Cuboid(Vector<3> pkt, double h, double w, double d, string NazwaPlikuCzyt, string NazwaPlikuPis);
    // Vector<3> TransDoUklRodzica(const Vector<3> &pkt1) const;
    //void rysuj(PzG::LaczeDoGNUPlota &Lacze);
    double StNaRad(double katOrient) {return katOrient*M_PI/180;}
    Cuboid operator+(Vector<3> wektor);
};

std::ostream &operator<<(std::ostream &Strm,
                         const Cuboid &Pr);