#pragma once

#include "vector.hh"
#include "../include/GeoSolid.hh"

#include "size.hh"

#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;
class Prism : public GeoSolid
{
double KatOrient;
Vector <3> polozenie; 
public:
    Prism(){};

    Prism(Vector<3> pkt, double h, double w, double d);
    Vector<3> TransDoUklRodzica(const Vector <3> &pkt1) const;
    //void rysuj(PzG::LaczeDoGNUPlota &Lacze);
};

std::ostream &operator<<(std::ostream &Strm, const Prism &Pr);