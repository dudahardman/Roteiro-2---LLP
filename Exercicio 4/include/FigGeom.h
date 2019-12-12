#ifndef FIGGEOM_H
#define FIGGEOM_H
#include <iostream>
#include <string>
using namespace std;

class FigGeom
{
    public:
        FigGeom();
        string getNome();
        void setNome(string n);
        double calculaArea(double b, double h);

    private:
        string nome;
};

#endif // FIGGEOM_H
