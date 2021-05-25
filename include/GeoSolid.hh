
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
    vector<Vector<3>> pkt1;
    Vector<3> srodek;
    double katOZ;
    double katOY;
    Vector<3> translacja;

public:
    Vector<3> operator[](int Ind) const { return pkt1[Ind]; } //wypisywanie

    Vector<3> &operator[](int Ind) { return pkt1[Ind]; } //wpisywanie
    void ObrotOZ(double katOZ, Matrix3x3 &macierz);
    void trans(const Vector<3> &vec);
   
      GeoSolid(){}
      
    GeoSolid(const GeoSolid &Prost)
    {
        pkt1 = Prost.pkt1;
        srodek = Prost.srodek;
        katOZ = Prost.katOZ;
        katOY = Prost.katOY;
        translacja = Prost.translacja;
    }


    GeoSolid operator =(const GeoSolid &Prost)
    {
        pkt1 = Prost.pkt1;
        srodek = Prost.srodek;
        katOZ = Prost.katOZ;
        katOY = Prost.katOY;
        translacja = Prost.translacja;
        return *this;
    }
};