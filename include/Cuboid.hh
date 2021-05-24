

#pragma once

// #include "vector.hh"
#include "GeoSolid.hh"

//#include "size.hh"
// #include "../include/lacze_do_gnuplota.hh"
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;
class Cuboid : public GeoSolid
{
    // Vector<3> pkt;
    // double kat_stopnie;

public:
    Cuboid(){};
    Cuboid(Vector<3> pkt, double h, double w, double d);
    // Vector<3> TransDoUklRodzica(const Vector<3> &pkt1) const;
    //void rysuj(PzG::LaczeDoGNUPlota &Lacze);
};

std::ostream &operator<<(std::ostream &Strm,
                         const Cuboid &Pr);