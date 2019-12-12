#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>
#include <string>
using namespace std;

class Trabalhador
{
    public:
        Trabalhador();
        string getNome();
        double getSalario();
        void setNome(string n);
        void setSalario(double s);

    protected:
        double salario;

    private:
        string nome;


};

#endif // TRABALHADOR_H
