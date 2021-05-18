// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
//#include "doctest.h"
#endif

#include <iostream>
#include <stdlib.h>

#include "exampleConfig.h"
#include "../include/example.h"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main()
{

  char menu;
  std::cout << "C++ Boiler Plate v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;
  std::system("cat ../LICENSE");

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
