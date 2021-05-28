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
void ZapisWspolrzednychDoStrumieniaProstopadloscianu(std::ostream &Strm, Matrix3x3 &mac, Vector<3> &droga, Cuboid &korpus);
void ZapisWspolrzednychDoStrumieniaProstopadloscianu(std::ostream &Strm, Vector<3> &droga, Cuboid &korpus);
bool ZapisWspolrzednychDoPlikuProstopadloscianu(const char *NazwaPliku, Matrix3x3 &mac, Vector<3> &droga, Cuboid &korpus);
bool ZapisWspolrzednychDoPlikuProstopadloscianu(const char *NazwaPliku, Vector<3> &droga, Cuboid &korpus);
void AnimacjaLotuDrona(PzG::LaczeDoGNUPlota &Lacze, double X, double Y);
void ObrotDrona(double kat);
};
std::ostream &operator<<(std::ostream &Strm,
                         Drone &dron);