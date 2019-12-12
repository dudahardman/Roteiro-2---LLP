#include <iostream>
#include "FigGeom.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
using namespace std;

int main()
{
    double areat1=0.0, areaq1=0.0, areac1=0.0;
    Triangulo t1 = Triangulo();
    Quadrado q1 = Quadrado();
    Circulo c1 = Circulo();

    t1.setNome("Triangulo");
    q1.setNome("Quadrado");
    c1.setNome("Circulo");
    areat1 = t1.calculaArea(5,2.0) / 2.0;
    areaq1 = q1.calculaArea(4,4.0);
    areac1 = c1.calculaArea(2,2) * 3.14;

    cout << t1.getNome() << ": " << areat1 << endl;
    cout << q1.getNome() << ": " << areaq1 << endl;
    cout << c1.getNome() << ": " << areac1 << endl;

    return 0;
}
