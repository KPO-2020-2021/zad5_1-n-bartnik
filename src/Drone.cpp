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
    droga[2] = 30.0;
    korpus = new Cuboid(droga, 50, 50, 30, "../datasets/Cuboid.dat", "../datasets/Drone.dat");
}

void Drone::ruch(Vector<3> droga, double katOZ, double katOY)
{
    korpus->set_katOZ(katOZ);
    korpus->set_katOY(katOY);
    this->droga = this->droga + droga;
    korpus->ObrotOZ(katOZ);
    korpus->trans(droga);
    korpus->zapis();
}

void Drone::ObrotDrona(double kat)
{
    korpus->ObrotOZ(kat);
    korpus->zapis();
}

void Drone::AnimacjaLotuDrona(PzG::LaczeDoGNUPlota &Lacze, double X, double Y)
{
    double x_dron = 20, y_dron = 20, z_dron = 0;
    double KatOr_st = 0;

    //-------------------------------------
    // Wznoszenie ...
    //
    Vector<3> wznoszenie;
    wznoszenie[2] = 2;
    cout << endl
         << "Wznoszenie ... " << endl;
    for (; z_dron <= 80; z_dron += 2)
    {
        ruch(wznoszenie, 0, 0);
        usleep(100000); // 0.1 ms
        Lacze.Rysuj();
    }

    z_dron -= 2;
    cout << "Zmiana orientacji ... " << endl;
    for (; KatOr_st <= 45; KatOr_st += 5)
    {

        ObrotDrona(5);
        usleep(100000);
        Lacze.Rysuj();
    }
    // KatOr_st -= 5;

    //-------------------------------------
    // Lot do przodu ...
    //
    Vector<3> lot;
    lot[0] = X / 50;
    lot[1] = Y / 50;
    cout << "Lot do przodu ... " << endl;
    for (; x_dron <= 50; x_dron += 1, y_dron += 1)
    {

        ruch(lot, 0, 0);
        usleep(100000);
        Lacze.Rysuj();
    }
    x_dron -= 1, y_dron -= 1;

    //-------------------------------------
    // Opadanie ...
    //
    Vector<3> opadanie;
    opadanie[2] = -2;
    cout << "Opadanie ... " << endl;
    for (; z_dron >= 0; z_dron -= 2)
    {

        ruch(opadanie, 0, 0);
        usleep(100000); // 0.1 ms
        Lacze.Rysuj();
    }
}
