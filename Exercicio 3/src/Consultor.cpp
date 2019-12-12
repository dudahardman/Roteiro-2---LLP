#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Consultor::Consultor()
{
    //ctor
}

double Consultor::SalarioBonus(){
    double novoSal = 0;
    return novoSal = getSal() * 1.1;
}
double Consultor::getSalario(float percentual){
    double novoSal2 = 0;
    novoSal2 = getSal() * percentual;
    return novoSal2;
}

