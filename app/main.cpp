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
#include "Drone.hh"
#include "exampleConfig.h"
#include "../include/example.h"

#define DL_KROTKI_BOK 100
#define DL_DLUGI_BOK 150

/*!
 * Przyklad zapisu wspolrzednych zbioru punktow do strumienia wyjściowego.
 * Dane sa odpowiednio sformatowane, tzn. przyjęto notację stałoprzecinkową
 * z dokładnością do 10 miejsca po przecinku. Szerokość wyświetlanego pola 
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

void PrzykladZapisuWspolrzednychDoStrumienia(std::ostream &StrmWy,
                                             double Przesuniecie)
{
       //----------------------------------------------std::
       //
       double x1, y1, x2, y2, x3, y3, x4, y4;

       x1 = y1 = 10;
       x2 = x1 + DL_DLUGI_BOK;
       y2 = y1;
       x3 = x2;
       y3 = y2 + DL_KROTKI_BOK;
       x4 = x3 - DL_DLUGI_BOK;
       y4 = y3;

       StrmWy << std::setw(16) << std::fixed << std::setprecision(10) << x1 + Przesuniecie
              << std::setw(16) << std::fixed << std::setprecision(10) << y1 + Przesuniecie << std::endl;
       StrmWy << std::setw(16) << std::fixed << std::setprecision(10) << x2 + Przesuniecie
              << std::setw(16) << std::fixed << std::setprecision(10) << y2 + Przesuniecie << std::endl;
       StrmWy << std::setw(16) << std::fixed << std::setprecision(10) << x3 + Przesuniecie
              << std::setw(16) << std::fixed << std::setprecision(10) << y3 + Przesuniecie << std::endl;
       StrmWy << std::setw(16) << std::fixed << std::setprecision(10) << x4 + Przesuniecie
              << std::setw(16) << std::fixed << std::setprecision(10) << y4 + Przesuniecie << std::endl;
       StrmWy << std::setw(16) << std::fixed << std::setprecision(10) << x1 + Przesuniecie
              << std::setw(16) << std::fixed << std::setprecision(10) << y1 + Przesuniecie << std::endl;
       /*Jeszcze raz zapisujemy pierwszy punkt,
       aby gnuplot narysowal zamkniętą linię.*/
}

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


/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main()
{
  char menu;

Drone dron;

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

      break;

      break;
    case 'p':
    {
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
    }
    return 0;
  }
}
