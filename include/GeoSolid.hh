
#pragma once
using namespace std;
#include <vector>
#include "matrix.hh"
#include "vector.hh"
#include "size.hh"
#include "Matrix3x3.hh"
// #include "vector3D.hh"
#include "lacze_do_gnuplota.hh"
class GeoSolid
{
protected:
    vector <Vector<3>> pkt1;

public:
    Vector<3> operator[](int Ind) const { return pkt1[Ind]; } //wypisywanie

    Vector<3> &operator[](int Ind) { return pkt1[Ind]; } //wpisywanie
    // Vector<3> Skaluj(const Vector<3> pkt1) const;
    void trans(const Vector<3> &vec);
};