#ifndef TRABPORHORA_H
#define TRABPORHORA_H
#include "Trabalhador.h"
#include <iostream>
#include <string>
using namespace std;

class TrabPorHora : public Trabalhador
{
    public:
        TrabPorHora();
        double getValorHora();
        void setValorHora(double vh);
        float calculaPagSemanal(int horasSemanais);

    private:
        double valorHora;
};

#endif // TRABPORHORA_H
