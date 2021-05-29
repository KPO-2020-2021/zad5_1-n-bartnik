// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
//#include "doctest.h"
#endif

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "lacze_do_gnuplota.hh"
#include "exampleConfig.h"
#include "example.h"
#include "Cuboid.hh"
#include "vector.hh"
#include "Drone.hh"
#include "Scene.hh"
#define DL_KROTKI_BOK 100
#define DL_DLUGI_BOK 150

/*!
 * Przyklad zapisu wspolrzednych zbioru punktow do strumienia wyjściowego.
 * Dane sa odpowiednio sformatowane, tzn. przyjęto notację stałoprzecinkową
 * z dokłaScenaścią do 10 miejsca po przecinku. Szerokość wyświetlanego pola 
 * to 16 miejsc, sposób wyrównywania - do prawej strony.
 * \param[in] StrmWy - strumien wyjsciowy, do ktorego maja zostac zapisane
 *                     kolejne wspolrzedne.
 * \param[in] Przesuniecie - ten parameter jest tylko po to, aby pokazać
 *                          mozliwosc zmiany wspolrzednych i Cuboida
 *                          i zmiane jego polorzenia na okienku graficznym
 *                         rysownym przez gnuplota.
 * \retval true - gdy operacja zapisu powiodła się,
 * \retval false - w przypadku przeciwnym.
 */

bool PrzykladZapisuWspolrzednychDoPliku(const char *sNazwaPliku,
                                        Cuboid Pr)
{
       std::ofstream StrmPlikowy;

       StrmPlikowy.open(sNazwaPliku);
       if (!StrmPlikowy.is_open())
       {
              std::cerr << ":(  Operacja otwarcia do zapisu \"" << sNazwaPliku << "\"" << std::endl
                        << ":(  nie powiodla sie." << std::endl;
              return false;
       }

       StrmPlikowy << Pr;

       StrmPlikowy.close();
       return !StrmPlikowy.fail();
}

int main()
{
       std::ofstream StrmWy;
       char menu = 'm';

       Vector<3> wektor;
       Vector<3> trans;
       Cuboid Pr(wektor, 20, 20, 80, "../datasets/Cuboid.dat", "../datasets/Cuboid.dat");
       Matrix3x3 macierz;
       Drone dron;

       PzG::LaczeDoGNUPlota Lacze;

       Lacze.DodajNazwePliku("../datasets/Drone.dat", PzG::RR_Ciagly, 2);
       Lacze.DodajNazwePliku("../datasets/Scena.dat", PzG::RR_Ciagly, 2);
       Lacze.DodajNazwePliku("../datasets/Scena2.dat", PzG::RR_Ciagly, 2);
       //
       //  Ustawienie trybu rysowania 3D, tzn. rysowany zbiór punktów
       //  znajduje się na wspólnej płaszczyźnie. Z tego powodu powoduj
       //  jako wspolrzedne punktow podajemy x,y,z.
       //
       Lacze.ZmienTrybRys(PzG::TR_3D);
       Lacze.Inicjalizuj();
       // Ustawienie zakresow poszczegolnych osi
       Lacze.UstawZakresY(-155, 155);
       Lacze.UstawZakresX(-155, 155);
       Lacze.UstawZakresZ(-20, 155);
       Scene Scena(300, 300, 0, "../datasets/Scena.dat", "../datasets/Scena2.dat");
       Scena.zapis();
       Lacze.Rysuj();
       while (menu != 'k')
       {

              std::cout << "Wybierz jedna z dostepnych opcji: " << std::endl;
              std::cout << "a - wybierz aktywnego drona" << std::endl;
              std::cout << "p - zadaj parametry obrotu" << std::endl;
              std::cout << "w - wyswietlenie wspolrzednych wierzcholkow" << std::endl;
              std::cout << "m - wyswietl menu" << std::endl;
              std::cout << "k - koniec dzialania programu" << std::endl;
              std::cin >> menu;

              switch (menu)
              {
              case 'a':
              {
              }
              break;

              case 'p':
              {
                     //cin >> wektor;
                     dron.AnimacjaLotuDrona(Lacze, 100, 100);
              }
              break;
              case 'w':
              {
              }
              break;
              case 'm':
                     break;
              case 'k':
              {
                     std::cout << "Koniec dzialania programu." << std::endl;
              }
              break;
              default:
              {
                     std::cout << "Bledna opcja" << std::endl;
              }
              break;
              }

              Lacze.Rysuj();
              std::cout << "Naciśnij ENTER, aby kontynuowac" << std::endl;
              std::cin.ignore(100000, '\n');
       }

       return 0;
}
