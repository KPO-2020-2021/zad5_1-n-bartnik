#include "Cuboid.hh"
using namespace std;

/*Fuckja buduje prostopadłościan. Przyjmuje wektor zawierający współrzędne jednego z pktów.
A następnie wysokość, długość przekatnej i długość prostopadłościanu (wpisywane standardowym wejściem).
Na podstawie tych danych oblicza współrzędne pozostałych pkt1chołków*/
Cuboid::Cuboid(Vector3D srodek, double x,double y, double z,std::string nazwa)
{
    double tab[]={x,y,z};
    wymiary= new Vector3D(tab);
    this->NazwaPlikuPis=NazwaPlikuPis;
  this->srodek=srodek;
  Vector3D pkt;

  pkt[0]=srodek[0]-(x/2);
  pkt[1]=srodek[1]+(y/2);
  pkt[2]=srodek[2]+(z/2);
  pkt1.push_back(pkt);

  pkt[0]=srodek[0]-(x/2);
  pkt[1]=srodek[1]+(y/2);
  pkt[2]=srodek[2]-(z/2);
  pkt1.push_back(pkt);


  pkt[0]=srodek[0]+(x/2);
  pkt[1]=srodek[1]+(y/2);
  pkt[2]=srodek[2]+(z/2);
  pkt1.push_back(pkt);

  pkt[0]=srodek[0]+(x/2);
  pkt[1]=srodek[1]+(y/2);
  pkt[2]=srodek[2]-(z/2);
  pkt1.push_back(pkt);

   pkt[0]=srodek[0]+(x/2);
  pkt[1]=srodek[1]-(y/2);
  pkt[2]=srodek[2]+(z/2);
  pkt1.push_back(pkt);

  pkt[0]=srodek[0]+(x/2);
  pkt[1]=srodek[1]-(y/2);
  pkt[2]=srodek[2]-(z/2);
  pkt1.push_back(pkt);


  pkt[0]=srodek[0]-(x/2);
  pkt[1]=srodek[1]-(y/2);
  pkt[2]=srodek[2]+(z/2);
  pkt1.push_back(pkt);

  pkt[0]=srodek[0]-(x/2);
  pkt[1]=srodek[1]-(y/2);
  pkt[2]=srodek[2]-(z/2);
  pkt1.push_back(pkt);

}
