#include "Drone.hh"
#include <cmath>
#include <cassert>
#include <unistd.h>

/*Konstruktor parametryczny
Argumenty:
- korpus, rotor - składowe drona. Korpus - cviało drona, rotor - pojedynczy wirnik
Zwraca:

*/
Drone::Drone()
{
    korpus = new Cuboid(droga, 10, 10, 10);
    // rotor[0] = new Prism(korpus[4], 3, 3, 3);
    // rotor[1] = new Prism(korpus[5], 3, 3, 3);
    // rotor[2] = new Prism(korpus[6], 3, 3, 3);
    // rotor[3] = new Prism(korpus[7], 3, 3, 3);
}

void Drone::ruch(Vector<3> droga)
{
    droga = droga;
    this->droga = this->droga + droga;
    *korpus = (*korpus) + this->droga;
}

// void Drone:: rysuj(PzG::LaczeDoGNUPlota &Lacze) {
//       korpus.rysuj(Lacze);
//     (rotor[0]).rysuj(Lacze);
//     (rotor[1]).rysuj(Lacze);
//     (rotor[2]).rysuj(Lacze);
//     (rotor[3]).rysuj(Lacze);
// }
