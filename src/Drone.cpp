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

    korpus = new Cuboid(droga, 50, 50, 50,"../datasets/Cuboid.dat", "../datasets/Drone.dat");
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
    korpus->zapis();
    std::cout<<droga;
    

}

// void Drone:: rysuj(PzG::LaczeDoGNUPlota &Lacze) {
//       korpus.rysuj(Lacze);
//     (rotor[0]).rysuj(Lacze);
//     (rotor[1]).rysuj(Lacze);
//     (rotor[2]).rysuj(Lacze);
//     (rotor[3]).rysuj(Lacze);
// }


// void Drone::ZapisWspolrzednychDoStrumieniaProstopadloscianu(std::ostream &Strm, Matrix3x3 &mac, Vector<3> &droga, Cuboid &korpus) {
//     for (int i = 0; i < 8; ++i)
//     {
//         korpus[i] = korpus[i] - droga;
//     }
//     for (int i = 0; i < 8; ++i)
//     {
//         korpus[i] = mac * korpus[i];
//     }
//     for (int i = 0; i < 8; ++i)
//     {
//         korpus[i] = korpus[i] + droga;
//     }
//     Strm << korpus << std::endl;
// }

// void Drone::ZapisWspolrzednychDoStrumieniaProstopadloscianu(std::ostream &Strm, Vector<3> &droga, Cuboid &korpus){
//     for (int i = 0; i < 8; ++i)
//     {
//         korpus[i] = korpus[i] + droga;
//     }
//     Strm << korpus << std::endl;
// }

// bool Drone::ZapisWspolrzednychDoPlikuProstopadloscianu(const char *NazwaPliku, Matrix3x3 &mac, Vector<3> &droga, Cuboid &korpus) {
//     std::ofstream StrmPlikowy;
//     StrmPlikowy.open(NazwaPliku);
//     if (!StrmPlikowy.is_open())
//     {
//         std::cerr << ":(  Operacja otwarcia do zapisu \"" << NazwaPliku << "\"" << std::endl
//                   << ":(  nie powiodla sie." << std::endl;
//         return false;
//     }
//     ZapisWspolrzednychDoStrumieniaProstopadloscianu(StrmPlikowy, mac, droga, korpus);

//     StrmPlikowy.close();
//     return !StrmPlikowy.fail();
// }
// bool Drone::ZapisWspolrzednychDoPlikuProstopadloscianu(const char *NazwaPliku, Vector<3> &droga, Cuboid &korpus) {
//     std::ofstream StrmPlikowy;
//     StrmPlikowy.open(NazwaPliku);
//     if (!StrmPlikowy.is_open())
//     {
//         std::cerr << ":(  Operacja otwarcia do zapisu \"" << NazwaPliku << "\"" << std::endl
//                   << ":(  nie powiodla sie." << std::endl;
//         return false;
//     }
//     ZapisWspolrzednychDoStrumieniaProstopadloscianu(StrmPlikowy, droga, korpus);

//     StrmPlikowy.close();
//     return !StrmPlikowy.fail();
// }