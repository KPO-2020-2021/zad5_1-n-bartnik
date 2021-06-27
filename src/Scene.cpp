#include "Scene.hh"
using namespace std;
/*!
    \brief
    *Funkcja Rysuj
    Rysuje scene przy pomocy łącza.
    * 
*/
void Scene::Rysuj()
{
    Lacze.Rysuj();
}

/*!
    \brief
    *Konstruktor sceny
    *Ustawia zakres sceny (-155 - 155). Następnie tworzy płaszczyzne w postaci siatki na przestrzeni OX x OY i zapisuje ją do pliku. 
    *Analogicznie funckja robi dla dronów, uprzednio ustawiając ich pozycję.
    *Następnie wszystkie zapisane pliki są rysowane.
*/

Scene::Scene()
{

    Lacze.ZmienTrybRys(PzG::TR_3D);
    Lacze.UstawZakresY(-155, 155);
    Lacze.UstawZakresX(-155, 155);
    Lacze.UstawZakresZ(-155, 155);

    double tab_wymiary[3] = {310, 310, 0};
    Vector<3> kwadrat(tab_wymiary);
    plaszczyzna = new Ground(kwadrat, 20); //nowa płaszczyzna = tworzy płaszczyznę
    Lacze.DodajNazwePliku(plaszczyzna->wez_nazwe().c_str(), PzG::RR_Ciagly, 2);
    plaszczyzna->zapisz();
    for (int i = 0; i < 2; i++)
    {
        double pozycja[3]{(double)(rand() % 220 - 110), (double)(rand() % 22 - 110), 25}; //ustala losową pozycje drona na płaszczyźnie
        TabDronow[i] = new Drone(i, Lacze, pozycja); //nowy dron
        TabDronow[i]->zapisz();
    }
    Lacze.Rysuj();
}

/*!
    \brief
    *Funkja menu -  odpowiada za wybór użytkownika - ma do wyboru jednego z dwóch aktywnych dronów (0,1). Dla numerów 1,2 - program umożliwia sterowanie dronem za pomocą funkcji sterowanie
*/

bool Scene::menu()
{
    cout << "Wybierz aktywnego drona (0 lub 1)" << endl;
    cout << "Inny numer konczy program" << endl;
    int nr;
    cin >> nr;
    if (nr < 2)
    {
        TabDronow[nr]->sterowanie();
    }
    else
    {
        return false;
    }
    return true;
}
