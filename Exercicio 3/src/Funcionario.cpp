#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario()
{
    //ctor
}

string Funcionario::getMat(){
    return matricula;
}

string Funcionario::getNome(){
    return nome;
}

double Funcionario::getSal(){
    return salario;
}
void Funcionario::setFunc(string m, string n, double s){
    nome = n;
    matricula = m;
    salario = s;
}
