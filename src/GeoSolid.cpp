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

// GeoSolid GeoSolid::operator+(Vector<3> wektor)
// {
//     Cuboid wynik;
//     pkt1.resize(8);
//     for (int i = 0; i < 8; i++)
//     {
//         wynik[i] = pkt1[i] + wektor;
//     }
//     return wynik;
// }

