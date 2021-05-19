#pragma once

#include "Cuboid.hh"
#include "Prism.hh"

class Drone
{
int id;
Vector3D droga;
Matrix3x3 mac;
Cuboid  korpus;
Prism rotor[4];
public:

//Drone(int id=0);
Drone ();
void ruch(Vector<3>droga);
void obrot(double kat);
};
