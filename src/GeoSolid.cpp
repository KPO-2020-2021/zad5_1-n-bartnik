#include "GeoSolid.hh"

/*FUnkjca trans realizuje translacje bryły geometrycznej
Argumenty: 
vec - wektor przesuniecia
pkt1 - tablica wierzchołków bryły */
void GeoSolid::trans(const Vector<3> &vec)
{
    for (int i = 0; i < (int)pkt1.size(); i++)
    {
        pkt1[i] = pkt1[i] + vec;
    }
}

void GeoSolid::ObrotOZ(double katOZ /*Matrix3x3 &macierz*/)
{

    for (int i = 0; i < (int)pkt1.size(); i++)
    {
        pkt1[i] = (macierz_obrot_z(katOZ)*((pkt1[i] ))) ;
    }
}

void GeoSolid::zapis()
{
    ofstream plik;
    plik.open(NazwaPlikuPis);
    for (int i = 0; i < (int)pkt1.size(); i++)
    {
        if (i % 2 == 0)
            plik << endl;
        plik << pkt1[i] << endl;
    }
    plik.close();
}

