#include "Prism.hh"

Prism :: Prism (Vector<3> pkt, double h, double w, double d)
{
    pkt1.resize(25);
    for (int i = 0; i < 25; i++)
    {
        pkt1[i] = pkt;
    }
    pkt1[1][0] -= w;

    pkt1[2][0] -= w/2;
    pkt1[2][1] -= h;

    pkt1[3][0] -= w;
    pkt1[3][2] += d;

    pkt1[4][0] -= w/2;
    pkt1[4][1] -= h;
    pkt1[4][2] += d;

    pkt1[5][0] -= w/2;
    pkt1[5][1] -= h;

    pkt1[6][0] += w/2;
    pkt1[6][1] -= h;

    pkt1[7][0] -= w/2;
    pkt1[7][1] -= h;
    pkt1[7][2] += d;

    pkt1[8][0] += w/2;
    pkt1[8][1] -= h;
    pkt1[8][2] += d;


    pkt1[9][0] += w/2;
    pkt1[9][1] -= h;

    pkt1[10][0] += w;


    pkt1[11][0] += w/2;
    pkt1[11][1] -= h;
    pkt1[11][2] += d;

    pkt1[12][0] += w;
    pkt1[12][2] += d;


    pkt1[13][0] += w;

    pkt1[14][0] += w/2;
    pkt1[14][1] += h;

    pkt1[15][0] += w;
    pkt1[15][2] += d;

    pkt1[16][0] += w/2;
    pkt1[16][1] += h;
    pkt1[16][2] += d;


    pkt1[17][0] += w/2;
    pkt1[17][1] += h;

    pkt1[18][0] -= w/2;
    pkt1[18][1] += h;

    pkt1[19][0] += w/2;
    pkt1[19][1] += h;
    pkt1[19][2] += d;

    pkt1[20][0] -= w/2;
    pkt1[20][1] += h;
    pkt1[20][2] += d;


    pkt1[21][0] -= w/2;
    pkt1[21][1] += h;

    pkt1[22][0] -= w;

    pkt1[23][0] -= w/2;
    pkt1[23][1] += h;
    pkt1[23][2] += d;

    pkt1[24][0] -= w;
    pkt1[24][2] += d;






}