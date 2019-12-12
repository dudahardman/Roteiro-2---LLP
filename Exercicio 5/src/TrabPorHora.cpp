#include "TrabPorHora.h"
#include "Trabalhador.h"
#include <iostream>
#include <string>
using namespace std;

TrabPorHora::TrabPorHora()
{

}

double TrabPorHora::getValorHora(){
    return valorHora;
}

void TrabPorHora::setValorHora(double vh){
    valorHora = vh;
}

float TrabPorHora::calculaPagSemanal(int horasSemanais){
    return horasSemanais * valorHora;
}
