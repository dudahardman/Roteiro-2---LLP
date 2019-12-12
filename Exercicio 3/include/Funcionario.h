#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
using namespace std;

class Funcionario
{
    public:
        Funcionario();
        string getMat();
        string getNome();
        double getSal();
        void setFunc(string m, string n, double s);

    private:
        string matricula, nome;
        double salario;

};

#endif // FUNCIONARIO_H
