#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

class Consultor : public Funcionario
{
    public:
        Consultor();
        double SalarioBonus();
        double getSalario(float percentual);
};

#endif // CONSULTOR_H
