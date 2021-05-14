

#pragma once

#include "vector.hh"
#include "GeoSolid.hh"


#include "size.hh"
// #include "../include/lacze_do_gnuplota.hh"
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;
class Prostopadloscian : public GeoSolid
{


public:
    Prostopadloscian(){};

    Prostopadloscian(Vector<3> pkt, double h, double w, double d);

// class Cuboid
// {
//   Vector3D pkt1[8];

// public:
//   Cuboid(){}; /*KOnstruktor bezparametryczy*/
//   Cuboid(Vector3D pkt, double h, double w, double r); /*KOnstruktor parametryczy*/
//   Vector3D operator[](int Ind) const { return pkt1[Ind]; }
//   Vector3D &operator[](int Ind) { return pkt1[Ind]; }
//   Cuboid operator+(Vector3D wektor);
//   double odleglosci();
//   /*funkcja rotacji
//   przyjmuje macierz i mnoży ją razy odpowiedni punkt
//   aby wykonac rotacje*/
//   void rot(Matrix3x3 mac)
//   {
//     for(int i=0; i<8; i++)
//     {
//       pkt1[i]=mac*pkt1[i];
//     }
//   }
//   /*funkcja translacji wektorów
//   przyjmuje wektor i dodaje go do aktualnego wektora*/
//   void trans(Vector3D wektor)
//   {
//     *this = *this + wektor;
//   }

// };

// /*
//  Operator wypisywania, przyjmuje prostokąt
//  */
// std::ostream &operator<<(std::ostream &Strm,
//                          const Cuboid &Pr);