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

void GeoSolid::ObrotOZ (double katOZ, Matrix3x3 &macierz) {
    macierz=(macierz* macierz_obrot_z(katOZ));
    for (int i=0; i<(int)pkt1.size(); i++) {
        
        pkt1[i] =macierz*pkt1[i];
    }
    
}

