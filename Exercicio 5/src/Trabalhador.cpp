#include "Trabalhador.h"
#include <iostream>
#include <string>
using namespace std;

Trabalhador::Trabalhador()
{
    //ctor
}

string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(string n){
    nome = n;
}

void Trabalhador::setSalario(double s){
    salario = s;
}


