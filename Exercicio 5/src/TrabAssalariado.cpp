#include "TrabAssalariado.h"
#include "Trabalhador.h"
#include <iostream>
#include <string>
using namespace std;

TrabAssalariado::TrabAssalariado()
{
    //ctor
}

float TrabAssalariado::calculaPagSemanal2(){
    return salario/4;
}
