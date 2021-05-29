#include "Scene.hh"
using namespace std;

Scene::Scene(double l, double w, double h, string NazwaPikuCzyt, string NazwaPlikuPis)
{
    this->NazwaPlikuCzyt = NazwaPlikuCzyt;
    this->NazwaPlikuPis = NazwaPlikuPis;
    Vector<3> tmp;
    int m = 0;
    k = 0;
    for (int i = -l / 2; i <= l / 2; i += 50)
    {
        for (int j = -w / 2; j <= w / 2; j += 50)
        {
            tmp[0] = i;
            tmp[1] = j;
            if (m % 5 == 0)
                tmp[2] = h;
            wierzcholki.push_back(tmp);
            m++;
        }
        k++;
    }
    ofstream plik;
    plik.open(NazwaPikuCzyt);
    for (int i = 0; i < (int)wierzcholki.size(); i++)
    {
        if (i % k == 0)
            plik << endl;
        plik << wierzcholki[i] << endl;
    }
    plik.close();
}

void Scene::zapis()
{
    ofstream plik;
    plik.open(NazwaPlikuPis);
    for (int i = 0; i < (int)wierzcholki.size(); i++)
    {
        if (i % k == 0)
            plik << endl;
        plik << wierzcholki[i] << endl;
    }
    plik.close();
}