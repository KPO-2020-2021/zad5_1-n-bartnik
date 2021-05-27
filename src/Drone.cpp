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

void Drone::ruch(Vector<3> droga, double katOZ, double katOY)
{
    //droga = droga;
    korpus->set_katOZ(katOZ);
    korpus->set_katOY(katOY);
    this->droga = this->droga + droga;
    korpus->ObrotOZ(katOZ, mac);
    korpus->trans(droga);
    

}

// void Drone:: rysuj(PzG::LaczeDoGNUPlota &Lacze) {
//       korpus.rysuj(Lacze);
//     (rotor[0]).rysuj(Lacze);
//     (rotor[1]).rysuj(Lacze);
//     (rotor[2]).rysuj(Lacze);
//     (rotor[3]).rysuj(Lacze);
// }




std::ostream &operator<<(std::ostream &Strm,
                         /*const*/ Drone &dron)
{

    // Dron::korpus;

    // Prostopadloscian korpus;
    // Graniastoslup wirniki[4];


    Strm << dron << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     Strm << P << endl;
    //     if ((i + 1) % 2 == 0)
    //         Strm << endl;
    // }

    return Strm;
}