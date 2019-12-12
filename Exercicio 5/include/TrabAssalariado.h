#ifndef TRABASSALARIADO_H
#define TRABASSALARIADO_H
#include "Trabalhador.h"
#include <iostream>
#include <string>
using namespace std;

class TrabAssalariado : public Trabalhador
{
    public:
        TrabAssalariado();
        float calculaPagSemanal2();

};

#endif // TRABASSALARIADO_H
