#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
using namespace std;

class Endereco
{
    public:
        Endereco();
        string getRua();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCep();
        int getNumero();
        void setEndereco(string r, int n, string b, string c, string e, string cp);

    private:
        string rua, bairro, cidade, estado, cep;
        int numero;
};

#endif // ENDERECO_H
