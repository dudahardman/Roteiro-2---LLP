#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <iostream>
using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string n);
        Pessoa(string n, Endereco e, string tel);
        string getNome();
        string getEndereco();
        string getTelefone();
        void setPessoa(string n, Endereco e, string tel);

    private:
        string nome, telefone;
        Endereco ender;
};

#endif // PESSOA_H
