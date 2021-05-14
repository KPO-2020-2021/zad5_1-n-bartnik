
#pragma once
using namespace std;
#include <vector>
#include "vector.hh"
class GeoSolid
{
protected:
/*PUnkty bryły*/
    vector<Vector<3>> pkt1;

public:
    Vector<3> operator[](int Ind) const { return pkt1[Ind]; } //wypisywanie

    Vector<3> &operator[](int Ind) { return pkt1[Ind]; } //wpisywanie

};