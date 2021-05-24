#include "../include/GeoSolid.hh"


/*FUnkjca move realizuje poruszanie się bryły geometrycznej
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
