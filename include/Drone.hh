#pragma once
#include "lacze_do_gnuplota.hh"
#include "Cuboid.hh"
#include "Prism.hh"

class Drone
{
int id;
Vector <3> droga;
Matrix3x3 mac;
Cuboid  *korpus;
Prism *rotor[4];
public:

//Drone(int id=0);
Drone ();
void ruch(Vector<3>droga, double katOZ, double katOY);
void obrot(double kat);

};
std::ostream &operator<<(std::ostream &Strm,
                         /*const*/ Drone &dron);