#include "FigGeom.h"
#include <iostream>
#include <string>
using namespace std;

FigGeom::FigGeom()
{
    //ctor
}

string FigGeom::getNome(){
    return nome;
}

void FigGeom::setNome(string n){
    nome = n;
}

double FigGeom::calculaArea(double b, double h){
    return b * h;
}
